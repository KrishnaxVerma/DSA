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
int main(){
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    print(s);

    pushAtBottom(s,0);

    print(s);
    return 0;
}