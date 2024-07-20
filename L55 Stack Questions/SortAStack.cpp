#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> s){

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl; 
}

void sortinsert(stack<int> &s, int num){

    //base case
    if(s.empty() || s.top()<num){
        s.push(num);
        return ;
    }

    int n= s.top();
    s.pop();

    sortinsert(s,num);

    s.push(n);
}


void sort(stack<int> &s){
    
    //base case
    if(s.empty()){
        return ;
    }

    int num= s.top();
    s.pop();

    //recursive call
    sort(s);

    sortinsert(s,num);

}


//TC O(n^2) SC O(n)
int main(){
    
    stack<int> s;
    s.push(4);
    s.push(20);
    s.push(1);
    s.push(3);
    s.push(6);
    s.push(5);

    print(s);

    sort(s);

    print(s);

    return 0;
}