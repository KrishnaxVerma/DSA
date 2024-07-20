#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this->next=NULL;
    }

    //destructor
    ~node(){
        int value = this->data;
        if(this->next!=NULL){
            next= NULL;cout<<"hi";
            delete next;
        }

        cout<<"Memory is free for the data with value "<<value<<endl;
    }
};

void InsertNode(node* &tail, int element, int d){

    //empty list
    if(tail==NULL){
        node* newnode= new node(d);
        tail= newnode;
        newnode->next= newnode;
    }
    //non empty list 
    else{
        node* curr= tail;

        while(curr->data!=element){
            curr= curr->next;
        }

        //element found, curr representing node of element
        node* temp= new node(d);
        temp->next= curr->next;
        curr->next= temp;
    }
}

void print(node* &tail){

    node* temp= tail;

    //empty list
    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return ;
    }

    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(tail!=temp);

    cout<<endl;
}

void deletenode(node* &tail, int value){

    //empty list
    if(tail==NULL){
        cout<<"List is empty, check again"<<endl;
        return ;
    }

    //non empty list
    node* prev= tail;
    node* curr= tail;

    while(curr->data!=value){
        prev= curr;
        curr= curr->next;
    }

    prev->next= curr->next;
    curr->next=NULL;

    //1 node link list
    if(prev==curr){
        tail=NULL;
    }
    //>=2 nodes linked list
    else if(tail==curr){
        tail=prev;
    }

    delete curr;
}

int main(){
    node* tail= NULL;
    InsertNode(tail,1,2);
    print(tail);

    // InsertNode(tail,2,3);
    // print(tail);
    // InsertNode(tail,3,4);
    // print(tail);
    // InsertNode(tail,4,5);
    // print(tail);
    // InsertNode(tail,2,0);
    // print(tail);

    // deletenode(tail,3);
    // print(tail);
    // deletenode(tail,5);
    // print(tail);

    deletenode(tail,2);
    print(tail);
    return 0;
}