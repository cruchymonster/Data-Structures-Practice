#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
} *head, *newnode, *temp;

void display(){
    temp = head;
    printf("Linked List: \n");
    while (temp!=0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    
}
void creation(){
    head = 0;
    int choice = 1;
    while (choice){
        newnode = (struct node *) malloc (sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Another Newnode?");
        scanf("%d", &choice);
    }
}
void main(){
    creation();
    display();
}