#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
 int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
 }
 int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
 }
 void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
 }
 int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
 }
 int peek(struct stack * s, int i){
    int arrayInd = s->top-i+1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return s->arr[arrayInd];
    }
 }

int main(){
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int *) malloc(s.size *sizeof(int));
    /*struct stack *s;
    s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));*/
    int top;
    //pushing an element manually
    s->arr[0] = 4;
    s->top++;
    
    //Push
   /* push(s, 20);
    push(s, 21);
    push(s, 22);
    push(s, 23);
    push(s, 24);
    push(s, 25);
    push(s, 26);
    push(s, 27);
    push(s, 28);
    push(s, 29);*/

    //Pop
   // pop(s);
    

    if(isEmpty(s)){
        printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }
    return 0;
}