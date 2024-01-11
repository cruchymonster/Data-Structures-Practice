#include <stdio.h>
#define N 50 
int stack[N];
int top = -1;

void push(){
    int x;
    printf("Enter Data: ");
    scanf("%d", &x);
    if (top == N-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top] = x;
    }
}
void pop(){
    int x;
    if (top == -1){
        printf("Empty stack");
    }
    else{
        printf("The popped element: %d\n",stack[top]);
        top--;
    }
};
void display(){
    printf("The stack:\n");
    for(int i = top; i > 0; i--){
        printf(" %d\n", stack[i]);
    }
};
void peek(int i){
    if((top-i+1)<0){
        printf("Invalid");
    }
    else{
        printf("Element Peeked: %d", stack[top-i+1]);
    }
};
void main(){
    push();
    push();
    push();
    push();
    push();
    push();
    push();
    push();
    push();
    pop();
    display();
    peek(6);
}