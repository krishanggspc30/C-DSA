#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void linkedlistTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element is: %d", ptr->data);
        ptr = ptr->next;
    }
}
struct Node* insertFirst(struct Node** head, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = (*head);
    ptr->prev = NULL;
    if(*head!=NULL){
        (*head)->prev = ptr;
    }
    (*head) = ptr;
    return *head;
};

struct Node* insertAtEnd(struct Node** head, int data) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    // Initialize data in the newly created node.
    newNode->data = data;
    newNode->next = NULL;
    if((*head) == NULL) {
        // If the head is NULL, then the new node is the new head.
        newNode->prev = NULL;
        // Assign head as the new node.
        (*head) = newNode;
        return ;
    }
    // If the list is not empty then traverse to the end of the list.
    struct Node* ptr = (*head);
    while(ptr->next != NULL) {
        ptr = ptr->next;
    }
    // From the last node, add a link to the new node.
    ptr->next = newNode;
    // Update the prev pointer in the new node to point to the previous last node.
    newNode->prev = ptr;
};

struct Node* insertAfterNode(struct Node* node, int data) {
    if(node == NULL) {
        printf("The given node cannot be NULL.");
        return ;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    // Initialize data in the newly created node.
    newNode->data = data;
    // Add a link from new node to next_node.
    newNode->next = node->next;
    // Add a link from the given node to the new node.
    node->next = newNode;
    // Update the prev pointer of the new node to the given node.
    newNode->prev = node;
    // If the next_node is not NULL, then update the prev of the next_node.
    if(newNode->next != NULL) {
        newNode->next->prev = newNode;
    }
};

struct Node* deleteFirst(struct Node** head){
    if(*head == NULL) return;
    struct Node* p = *head;
    *head = (*head)->next;
    p->next = NULL;
    free(p);
};
struct Node* deleteLast(struct Node** head){
    if(*head == NULL) return;
    struct Node* p = *head;
    while(p->next!=NULL){
        p = p->next;
    }
    struct Node* prev = p->prev;
    prev->next = NULL;
    p->prev = NULL;
    free(p);
};
struct Node* deletePosition(struct Node** head, int pos){
    struct Node* curr = *head;
    if(pos == 1) {
        deleteAtFront(head);
        return ;
    }
    while(pos > 1 && curr) {
        curr = curr->next;
        pos--;
    }
    if(curr == NULL) {
        printf("Node at position is not present.\n");
        return ;
    }
    struct Node* prevNode = curr->prev;
    struct Node* nextNode = curr->next;
    curr->prev->next = nextNode;
    if(nextNode != NULL) {
        nextNode->prev = prevNode;
    }
    curr->next = curr->prev = NULL;
    free(curr);
};


int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second->prev;
    

    return 0;
}