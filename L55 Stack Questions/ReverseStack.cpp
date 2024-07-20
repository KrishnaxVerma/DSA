#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int> &s, int x){

    if(s.empty()){
        s.push(x);
        return ;
    }

    else{
        int temp=s.top();
        s.pop();

        //recusrive call
        pushAtBottom(s,x);
        s.push(temp);
        return ;
    }
}

void print(stack<int> s){

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl; 
}

void reverse(stack<int> &s){

    //base case
    if(s.empty()){
        return ;
    }

    int num= s.top();
    s.pop();

    //recursive call
    reverse(s);

    pushAtBottom(s,num);
}

//TC O(n^2)
//SC o(n)
int main(){
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    print(s);

    reverse(s);

    print(s);

    return 0;
}