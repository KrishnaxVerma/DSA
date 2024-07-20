#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    public:
    node(int d){
        data=d;
        next=NULL;
    }
};

void InsertNode(node* &tail, int element, int d){

    if(tail==NULL){
        node* newnode= new node(d);
        tail= newnode;
        newnode->next= newnode;
    }
    else{
        node* curr= tail;

        while(curr->data!=element){
            curr= curr->next;
        }

        node* temp= new node(d);
        temp->next= curr->next;
        curr->next= temp;
    }
}

void print(node *head) { 
    node *temp = head; 
    if(head != NULL) 
    { 
        cout << endl; 
        do { 
        cout << temp->data << " "; 
        temp = temp->next; 
        } while(temp != head); 
    } 
} 

void split(node* &tail, node* &tail1, node* &tail2){

    tail1=tail;
     
    node* slow= tail;
    node* fast= tail->next;

    while(fast!=tail && fast->next!=tail){
        slow=slow->next;
        fast=fast->next->next;
    }

    node* temp=slow->next;

    if(fast==tail){
        
        while(temp->next!=tail){
            temp=temp->next;
        }

        temp->next=slow->next;
        slow->next=tail;
        tail2=temp->next;
    }
    else if(fast->next=tail){
        fast->next=slow->next;     
        tail2=slow->next;
        slow->next=tail1;
        tail2=temp;
    }
}

int main(){

    node *head = NULL; 
    node *head1 = NULL; 
    node *head2 = NULL; 
     
    InsertNode(head,0,1);
    InsertNode(head,1,2);
    InsertNode(head,2,3);
    InsertNode(head,3,4);
    InsertNode(head,4,5);
    InsertNode(head,5,6);
     
    cout << "Original Circular Linked List"; 
    print(head);     
     
    split(head, head1, head2); 
     
    cout << "\nFirst Circular Linked List"; 
    print(head1); 
     
    cout << "\nSecond Circular Linked List"; 
    print(head2); 
    return 0; 
} 