#include <iostream>
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

void InsertAtTail(node* &head,node* &tail,int d){
    node* temp= new node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
        return ;
    }
    else{
        tail->next=temp;
        tail=tail->next;
        return ;
    }
}

class stack{

    public:
    node* head;
    node* tail;

    public:
    stack(){
        
        head =NULL;
        tail = NULL;
        //InsertAtTail(head,tail,d);
    }

    void push(int d){
        InsertAtTail(head,tail,d);
    }

    void pop() {
    if (head==NULL && tail==NULL) {
        cout << "Stack Underflow"<<endl;
    } 
    else if (head==tail) {
        cout<<"stack is empty now"<<endl;
        head=NULL;
        tail=NULL;
    } 
    else {
        node* temp=head;
        while (temp->next!=tail) {
            temp=temp->next;
        }

        delete tail;
        temp->next=NULL;
        tail=temp;
    }
}


    int peek(){
        if(head==NULL){
            return -1;
        }
        node* temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
        }

        int ans= temp->data;
        return ans;
    }

    bool isEmpty(){
        if(head==NULL){
            return true;
        }
        else{
            return false;
        }
    }
    
};

int main(){
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }   
    else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    
    return 0;
}