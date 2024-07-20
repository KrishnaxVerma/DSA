#include <iostream>
#include <map>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next=NULL;
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

void print(node* &tail){

    node* temp= tail;

    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return ;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);

    cout<<endl;
}

bool isCircular(node* &head){

    if(head==NULL){
        cout<<"Link list is empty"<<endl;
        return true;
    }

    node* temp= head->next;

    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }

    if(temp==NULL){
        return false;
    }

    if(temp==head){
        return true;
    }
}

//second approach
bool isCircular2(node* head) {
    if (!head || !head->next) {
        return false; // An empty list or a list with a single node cannot be circular
    }

    node* slow = head;
    node* fast = head->next;

    while (fast && fast->next) {
        if (slow == fast) {
            return true; // The linked list is circular
        }

        slow = slow->next;
        fast = fast->next->next;
    }

    return false; // The linked list is not circular
}

//map approach
bool isCircularLL(node* &head){

}

int main(){
    node* tail= NULL;
    InsertNode(tail,1,2);
    InsertNode(tail,2,3);
    InsertNode(tail,3,4);
    InsertNode(tail,4,5);
    InsertNode(tail,5,6);
    InsertNode(tail,6,7);

    if(isCircularLL(tail) && isCircular(tail) && isCircular2(tail)){
        cout<<"Linked list is circular "<<endl;
    }
    else{
        cout<<"Linked list is not circular "<<endl;
    }
    return 0;
}