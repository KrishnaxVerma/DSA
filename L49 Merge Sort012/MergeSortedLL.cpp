#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next=NULL;
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
    node* temp= head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;

    }
    cout<<endl;
}

node* solve(node* first,node* second){

    //if only one element is present in the first
    if(first->next==NULL){
        first->next=second;
        return first;
    }

    node* curr1= first;
    node* next1= curr1->next;
    node* curr2= second;
    node* next2= curr2->next;

    while(next1!=NULL && curr2!=NULL){

        if((curr2->data >= curr1->data) && (curr2->data <= next1->data)){
            //adding node in first list
            curr1->next=curr2;
            next2= curr2->next;
            curr2->next=next1;
            //update pointer
            curr1=curr2;
            curr2=next2;
        }
        else{//move forward these pointer

            curr1=next1;
            next1=next1->next;

            if(next1==NULL){

                curr1->next=curr2;
                return first;
            }
        }
    }
    return first;
}

node* merge(node* h1,node* h2){

    if(h1==NULL){
        return h2;
    }
    if(h2==NULL){
        return h1;
    }

    if(h1->data<=h2->data){
        return solve(h1,h2);
    }
    else{
        return solve(h2,h1);
    }
}

int main(){
    node* n1=new node(5);
    node* h1= n1;
    InsertAtHead(h1,4);
    InsertAtHead(h1,2);
    print(h1);

    node* n2=new node(5);
    node* h2=n2;
    InsertAtHead(h2,3);
    InsertAtHead(h2,1);
    print(h2);

    node* m=merge(h1,h2);
    print(m);
    return 0;
}