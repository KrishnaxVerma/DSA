#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;

class SpecialStack{

    public:
    stack<int> s;
    int mini=INT_MAX;

    public:
    
    void push(int data){
        //for first element
        if(s.empty()){
            s.push(data);
            mini= data;
        }
        else{
            if(data<mini){
                s.push(2*data-mini);
                mini= data;
            }
            else{
                s.push(data);
            }
        }
    }

    int pop(){
        if(s.empty()){
            return -1;
        }

        int curr= s.top();
        s.pop();

        if(curr>mini){
            return curr;
        }
        else{
            int prevmin= mini;
            int val= 2*mini-curr;
            mini= val;
            return prevmin;
        }
    }

    int top(){
        if(s.empty()){
            return -1;
        }

        int curr= s.top();

        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    bool isEmpty(){
        return s.empty();
    }

    int getMin(){
        if(s.empty()){
            return -1;
        }

        return mini;
    }

};

int main(){
    SpecialStack s;
    s.push(10);
    s.push(8);
    s.push(6);
    s.push(1);
    cout<<s.top();
    return 0;
}