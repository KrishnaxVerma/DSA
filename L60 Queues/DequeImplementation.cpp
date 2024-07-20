#include <iostream>
using namespace std;

class Deque{

    public:
    int* arr;
    int size;
    int front;
    int rear;

    public:
    Deque(int n){
        size=n;
        arr= new int[n];
        front=-1;
        rear=-1;
    }

    bool pushFront(int x){

        //check full or not
        if(isFull()){
            return false;
        }
        else if(isEmpty()){
            front=rear=0;
        }
        else if(front==0 && rear!=size-1){
            front=size-1;
        }
        else{
            front--;
        }

        arr[front]=x;
        return true;
    }

    bool pushRear(int x){

        //check full or not
        if(isFull()){
            return false;
        }
        else if(isEmpty()){
            front=rear=0;
        }
        else if(rear == size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }

        arr[rear]=x;
        return true;
    }

    bool popFront(){

        if(isEmpty()){//to check queue is empty
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){//single element
            front=rear=-1;
        }
        else if(front==size-1){//to maintain cyclic nature
            front=0;
        }
        else{
            front++;
        }

        return ans;
    }

    bool popRear(){
        
        if(front==-1){//to check queue is empty
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){//single element
            front=rear=-1;
        }
        else if(rear==0){//to maintain cyclic nature
            rear=size-1;
        }
        else{
            rear--;
        }

        return ans;
    }

    int getFront(){

        if(isEmpty()){
            return -1;
        }
        
        return arr[front];
    }

    int getRear(){

        if(isEmpty()){
            return -1;
        }
        
        return arr[rear];
    }

    bool isEmpty(){

        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){

        if((front==-1 && rear==size-1) || front!=0 && (rear= (front-1)%(size-1))){
            return false;
        }
        else{
            return true;
        }
    }

    //seems more accurate to me
    // bool isFull() {
    // if ((rear + 1) % size == front) {
    //     return true;
    // } else {
    //     return false;
    // }
}

};

int main(){
    
    return 0;
}