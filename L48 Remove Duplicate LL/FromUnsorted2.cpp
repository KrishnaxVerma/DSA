#include <iostream>
#include <map>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this->next=NULL;
        this->data = data;
    }

    ~node(){

        if(this->next!=NULL){
            this-> next= NULL;
            delete next;
        }

    }
};

void InsertAtHead (node* &head, int d){

    node* temp= new node(d);
    temp -> next= head;
    head= temp;
}


void print(node* &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


//Time complexity O(n)
//Space complexity O(n)

void RemoveDup(node* &head){
   
    node* curr = head;
    node* prev = NULL;
    map<int, bool> visited;
    
    while(curr != NULL){
        if(!visited[curr->data]){
            visited[curr->data]=true;
            prev=curr;
            curr=curr->next;
        }
        else{
            prev->next=curr->next;
            delete curr;
        }
        curr=prev->next;
    }
}
int main(){

    node* n= new node(2);
    node* head=n;

    InsertAtHead(head,2);
    InsertAtHead(head,4);
    InsertAtHead(head,5);
    InsertAtHead(head,2);
    InsertAtHead(head,4);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    InsertAtHead(head,0);
    InsertAtHead(head,1);
    InsertAtHead(head,0);

    print(head);

    RemoveDup(head);

    print(head);
    return 0;
}