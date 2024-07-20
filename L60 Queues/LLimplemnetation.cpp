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
        int value = this->data;
        if(this->next!=NULL){
            this-> next= NULL;
            delete next;
        }
    }
};


class queue{

    public:
    node* head;
    node* tail;

    public:
    queue(){
        head=new node(-1);
        tail=head;
    }

    void enqueue(int data){
        node* temp= new node(data);
        tail->next= temp;
        tail= temp;
    }

    int dequeue(){

        if(tail==head){
            return -1;
        }

        int value= head->next->data;
        node* temp=head->next;
        head->next=head->next->next;
        temp->next=NULL;
        delete temp;

        return value;
    }

    int front(){

        if(tail==head){
            return -1;
        }

        int val= head->next->data;
        return val;
    }

    bool isEmpty(){
        if(head==tail){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);

    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    return 0;
}