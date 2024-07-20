#include <iostream>
#include <map>
using namespace std;

class node{

    public:
    int data;
    node* next;
    node* random;

    node(int data){
        this->data = data;
        this->next=NULL;
        this->random=NULL;
    }

    ~node(){
        if(this->next!=NULL){
            this-> next= NULL;
            this-> random= NULL;
            delete next;
        }
    }
};
void print(node* &head){
    node* temp= head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;

    }
    cout<<endl;
}

void InsertAtHead (node* &head, int d){

    //new node create
    node* temp= new node(d);
    temp -> next= head;
    head= temp;
}

void InsertAtTail(node* &head, node* &tail, int d){

    node* newnode= new node(d);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return ;
    }
    else{
        tail->next= newnode;
        tail=newnode;
        return ;
    }
}

//approach 1
//SC O(n) TC O(n)
node* cloneLL(node* head){

    //create a clone list
    node* cloneHead= NULL;
    node* cloneTail= NULL;

    node* temp= head;

    while(temp!=NULL){
        InsertAtTail(cloneHead,cloneTail,temp->data);
        temp=temp->next;
    }

    map <node*, node*> oldTonewNode;

    //create a map
    node* originalnode= head;
    node* clonenode= cloneHead;

    while(originalnode!=NULL){

        oldTonewNode[originalnode]= clonenode;
        originalnode= originalnode->next;
        clonenode= clonenode->next;
    }

    //copy random pointer
    originalnode= head;
    clonenode= cloneHead;

    while(originalnode!=NULL){
        clonenode->random= oldTonewNode[originalnode->random];
        originalnode= originalnode->next;
        clonenode= clonenode->next;
    }

    return cloneHead;
}


//approach 2
//SC O(1) TC O(n)
node* cloneLL2(node* head){

    //create a clone linked list
    node* cloneHead = NULL;
    node* cloneTail = NULL;

    node* temp= head;
    while(temp!=NULL){
        InsertAtTail(cloneHead,cloneTail,temp->data);
        temp= temp->next;
    }

    //clones add in between original list
    node* originalnode= head;
    node* clonenode= cloneHead;

    while (clonenode!=NULL && originalnode!=NULL){
        
        node* next= originalnode->next;
        originalnode->next= clonenode;
        originalnode=next;

        next= clonenode->next;
        clonenode->next= originalnode;
        clonenode=next;
    }

    //copy random pointer
    temp= head;
    while(temp!=NULL){
        
        if(temp->next!=NULL){
            temp->next->random= temp->random?
            temp->random->next: temp->random;
        }

        temp=temp->next->next;
    }

    //reverse the changes made in step 2
    originalnode= head;
    clonenode= cloneHead;

    while (clonenode!=NULL && originalnode!=NULL){
        originalnode->next= clonenode->next;
        originalnode= originalnode->next;

        if(originalnode!=NULL){
            clonenode->next= originalnode->next;
        }
        clonenode= clonenode->next;
    }   

    return cloneHead;
}

//appraoch 3
node* cloneLL3(node* head){

    //make a clone linked list
    node* cloneHead=NULL;
    node* cloneTail=NULL;

    node* temp= head;
    while(temp!=NULL){
        InsertAtTail(cloneHead,cloneTail,temp->data);
        temp=temp->next;
    }

    //calculate distance of random pointer and traverse to assign
     
    temp= head;
    node* curr=head;
    node* tempclone=cloneHead;
    node* currclone=cloneHead;
    while(curr!=NULL){

        temp=head;
        tempclone=cloneHead;
        int d=1;
        while(temp!=curr->random){
            d++;
            temp=temp->next;
        }

        for(int i=0;i<d;i++){
            tempclone=tempclone->next;
        }
        currclone->random=tempclone;

        curr=curr->next;
        currclone=currclone->next;
        
    }

    return cloneHead;
}
int main(){

    node* n= new node(3);
    node* head= n;
    InsertAtHead(head,2);
    InsertAtHead(head,1);

    cout<<"Original linked list"<<endl;
    print(head);

    node* copy= cloneLL3(head);

    cout<<"Copied Linked list"<<endl;
    print(copy);
    return 0;
}