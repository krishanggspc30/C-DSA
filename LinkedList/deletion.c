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
struct Node * delFirst(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    void free(void *ptr);
    return head;
};
struct Node * delatIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i = 0; i<index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
};
struct Node * delLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
};
struct Node * delValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
};

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;


    //Allocation of memories for nodes of linked list in the heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));


    //Linkedlist first and seond nodes
    head->data = 7;
    head->next = second;

    // linking second and third nodes
    second->data = 11;
    second->next = third;

    // Termination of the list
    third->data = 66;
    third->next = fourth;

    fourth ->data = 89;
    fourth->next = NULL;

    //head = delFirst(head);
    //head = delatIndex(head, 2);
    //head = delLast(head);
    head = delValue(head, 11);
    linkedlistTraversal(head);
    return 0;
}