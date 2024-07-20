#include <iostream>
#include <map>
using namespace std;

class node{

    public:
    int data;
    node* next;

    public:
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void InsertAtHead (node* &head, int d){

    //new node create
    node* temp= new node(d);
    temp -> next= head;
    head= temp;
}


//Time complexity is O(n)
//Space Complexity is O(n)
bool DetectLoop(node* &head){

    if(head==NULL){
        return false;
    }

    map<node*,bool> visited;
    node* temp= head;

    while(temp!=NULL){

        if(visited[temp] == true){
            return true;
        }

        visited[temp]=true;
        temp=temp->next;
    }

    return false;
}

//Time complexity is O(n)
//Space Complexity is O(1)
node* FloydDetectLoop(node* &head){

    if(head==NULL){
        return NULL;
    }

    node* slow=head;
    node* fast=head;

    while(fast!=NULL && slow!=NULL){
        
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }

        slow=slow->next;

        if(slow==fast){
            return slow;
        }        
    }

    return NULL;
}

node* GetStartingNode(node* &head){

    if(head==NULL){
        return NULL;
    }

    node* intersection =FloydDetectLoop(head);
    node* slow =head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }

    return slow;
}


void RemoveLoop(node* &head){

    if(head==NULL){
        return ;
    }

    node* StartingOfLoop=GetStartingNode(head);
    node*temp = StartingOfLoop;

    while (temp->next!=StartingOfLoop){
        temp=temp->next;
    }

    temp->next=NULL;
    
}
int main(){
    
    node* n=new node(1);
    node* tail=n;
    node* head=n;

    
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    InsertAtHead(head,4);
    InsertAtHead(head,5);
    InsertAtHead(head,6);
    // print(head);
    tail->next=head->next;
    if(FloydDetectLoop(head)!=NULL && DetectLoop(head)){
        cout<<"Loop is present "<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }

    cout<<"Starting of the loop is: "<<GetStartingNode(head)->data<<endl;;

    RemoveLoop(head);
    if(FloydDetectLoop(head)!=NULL && DetectLoop(head)){
        cout<<"Loop is present "<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }
    return 0;
}