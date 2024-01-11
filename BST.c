#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int data){
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node*));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
};
void preorder(struct node *root){
    if (root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
};

int isBST(struct node *root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if (!isBST(root->left)){
            return 0;
        }
        if (prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
};
int main(){
    struct node *p = create(10);
    struct node *p1 = create(5);
    struct node *p2 = create(15);
    struct node *p3 = create(3);
    struct node *p4 = create(8);
    struct node *p5 = create(13);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    preorder(p);
    if(isBST(p)==1){
        printf("\nIt Is a BST");
    }
    else{
        printf("\nIt Is not a BST");
    }
    return 0;
}