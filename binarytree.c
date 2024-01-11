#include <stdio.h>
#include <stdlib.h>
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
}
int main(){
    struct node *p = create(4);
    struct node *p1 = create(8);
    struct node *p2 = create(9);
    struct node *p3 = create(10);
    struct node *p4 = create(41);
    struct node *p5 = create(14);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    preorder(p);
    return 0;
}