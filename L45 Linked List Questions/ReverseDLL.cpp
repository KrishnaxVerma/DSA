//Reverse a doubly linked list
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    public:
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

};

void reverse(node* &head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    node* curr = head;
    node* temp = NULL;
    
    while (curr != NULL) {
        // Swap the next and prev pointers
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        // Move to the next node in the original list
        curr = curr->prev;
    }

    // Adjust the head pointer to point to the new head of the reversed list
    if (temp != NULL) {
        head = temp->prev;
    }
}
