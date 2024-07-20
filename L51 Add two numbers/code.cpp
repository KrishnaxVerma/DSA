#include <iostream>
#include <vector>
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

void InsertAtTail(node* &head, node* &tail, int d){

    node* temp= new node(d);

    if(head==NULL){
        head=temp;
        tail=temp;
        return ;
    }
    else{
        tail->next=temp;
        tail=temp;
        return ;
    }
}
node* reverse(node* &head){
    node* prev=NULL;
    node* curr= head;
    node* next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    return prev;
}

node* addLL(node* &first, node* &second){

    int carry=0;

    node* ansHead= NULL;
    node* ansTail= NULL;

    while(first!=NULL && second!=NULL){
        int sum= carry+ first->data+ second->data;

        int digit= sum%10;
        InsertAtTail(ansHead,ansTail,digit);

        carry= sum/10;

        first= first->next;
        second =second->next;
    }

    while(first!=NULL){
        int sum= carry+ first->data;

        int digit= sum%10;
        InsertAtTail(ansHead,ansTail,digit);

        carry= sum/10;

        first= first->next;
    }

    while(second!=NULL){
        int sum= carry+ second->data;

        int digit= sum%10;
        InsertAtTail(ansHead,ansTail,digit);

        carry= sum/10;

        second =second->next;
    }

    while(carry!=0){
        int sum= carry;
        int digit= sum%10;
        InsertAtTail(ansHead,ansTail,digit);

        carry= sum/10;

    }

    return ansHead;
}

//Better substitute of addLL function
node* addLL_1(node* &first, node* &second){

    int carry=0;

    node* ansHead= NULL;
    node* ansTail= NULL;

    while(first!=NULL || second!=NULL || carry!=0){

        int val1=0;
        if(first!=NULL){
            val1=first->data;
        }

        int val2=0;
        if(second!=NULL){
            val2= second->data;
        }

        int sum= carry+ val1+ val2;

        int digit= sum%10;
        InsertAtTail(ansHead,ansTail,digit);

        carry= sum/10;

        if(first!=NULL){
            first= first->next;
        }
        if(second!=NULL){
        second =second->next;
        }
    }

    return ansHead;
}
node* add(node* &first, node* &second){

    //reverse input LL
    first= reverse(first);
    second= reverse(second);

    //add 2 LL
    node* ans= addLL_1(first,second);

    //reverse ans
    ans= reverse(ans);

    return ans;

}

//TC O(M+N) SC O(Max(M,N))
int main(){

    node* n1=new node(3);
    node* head1=n1;
    InsertAtHead(head1,5);
    InsertAtHead(head1,1);
    print(head1);

    node* n2=new node(6);
    node* head2=n2;
    InsertAtHead(head2,9);
    print(head2);

    node* ans=add(head1,head2);
    print(ans);
    return 0;
}