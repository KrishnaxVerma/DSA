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

//approach 1
//TC O(n) SC O(1)
void sort1(node* &head){

    node* temp=head;

    int z=0,o=0,t=0;

    while(temp!=NULL){
        if(temp->data==0){
            z++;
        }
        else if(temp->data==1){
            o++;
        }
        else if(temp->data==2){
            t++;
        }

        temp=temp->next;
    }

    temp=head;
    while(z){
        temp->data=0;
        temp=temp->next;
        z--;
    }
    while(o){
        temp->data=1;
        temp=temp->next;
        o--;
    }
    while(t){
        temp->data=2;
        temp=temp->next;
        t--;
    }
}

//approach 2
//TC O(n) SC O(1)
void InsertAtTail(node* &tail, node* &curr){

    tail->next=curr;
    tail=curr;
}
void sort2(node* &head){

    node* zeroHead= new node(-1);
    node* zeroTail= zeroHead;
    node* oneHead= new node(-1);
    node* oneTail= oneHead;
    node* twoHead= new node(-1);
    node* twoTail= twoHead;

    node* curr= head;

    while(curr!=NULL){
        
        int value = curr->data;

        if(value==0){
            InsertAtTail(zeroTail,curr);
        }
        else if(value==1){
            InsertAtTail(oneTail,curr);
        }
        else if(value==2){
            InsertAtTail(twoTail,curr);
        }

        curr=curr->next;
    }

    //merge 3 sublist

    //1s list is not empty
    if(oneHead->next!=NULL){
        zeroTail->next=oneHead->next;
    }
    else{
        zeroTail->next=twoHead->next;
    }

    oneTail->next=twoHead->next;
    twoTail->next=NULL;

    //setup head
    head=zeroHead->next;

    //delete dummy notes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
}

int main(){

    node* n=new node(2);
    node* head=n;

    InsertAtHead(head,1);
    InsertAtHead(head,1);
    InsertAtHead(head,0);
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,0);
    InsertAtHead(head,2);

    print(head);

    sort2(head);

    print(head);
    return 0;
}