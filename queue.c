#include<stdio.h>
#define N 50
int queue[N];
int front = -1;
int rear = -1;

void enqueue(){
    int x;
    printf("Enter Data: \n");
    scanf("%d", &x);
    if (rear == N-1){
        printf("Stack Overflow");
    }
    else if (front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}
void dequeue(){
    if (front == -1 && rear == -1){
        printf("Empty Stack");
    }
    else if (front == rear){
        front = rear = -1;
    }
    else{
        printf("Deleted Element: %d\n", queue[front]);
        front++;
    }
}
void display(){
    int i;
    printf("Queue is: \n");
    for (i=front;i<rear+1;i++){
        printf("%d\n",queue[i]);
    }
}
void main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    display();
}