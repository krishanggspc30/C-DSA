#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
void linkedlistTraversal(struct Node* ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    //Allocation of memories for nodes of linked list in the heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    //Linkedlist first and seond nodes
    head->data = 7;
    head->next = second;

    // linking second and third nodes
    second->data = 11;
    second->next = third;

    // Termination of the list
    third->data = 66;
    third->next = NULL;

    linkedlistTraversal(head);
    return 0;
}