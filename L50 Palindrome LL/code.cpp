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

//my code
int getlength(node* &head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }

    return count;
}
bool checkpal(node* &head){
    
    int l= getlength(head);
    int* arr= new int[l];

    node* temp=head;
    for(int i=0;temp!=NULL;i++){
        arr[i]=temp->data;
        temp=temp->next;
    }

    for(int i=0;i<l/2;i++){
        if(arr[i]!=arr[l-i-1]){
            return false;
        }
    }
    delete[] arr;
    return true;
}

//approach
//SC O(n) TC O(n)
bool palindromeLL(node* head){

    vector<int> arr;
    node* temp= head;

    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }

    int l=arr.size();
    int s=0;
    int e=l-1;

    while(s<=e){
        if(arr[s]!=arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

//approach2
//SC O(1) TC O(n)
node* getMid(node* head){

    node* slow= head;
    node* fast= head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow;
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
bool isPalindrome(node* &head){

    if(head==NULL || head->next==NULL){
        return true;
    }

    //find middle
    node* middle=getMid(head);

    //reverse linked list after middle
    node* temp= middle->next;
    middle->next= reverse(temp);

    //compare both halves
    node* head1=head;
    node* head2= middle->next;

    while(head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }

    //repeat step 2 to undo the reversing
    temp= middle->next;
    middle->next= reverse(temp);

    return true;
}
int main(){

    node* n= new node(0);
    node* head=n;

    InsertAtHead(head,1);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    InsertAtHead(head,1);
    InsertAtHead(head,0);

    print(head);

    if(isPalindrome(head)){
        cout<<"palindrome Linked list";
    }
    else{
        cout<<"Not palindrome linked list";
    }

    return 0;
}