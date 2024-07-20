#include <iostream>
#include <queue>
#include <stack>
using namespace std;

//approach 1 TC SC O(n)
queue<int> rev(queue<int> q){
        stack<int> s;
        
        while(!q.empty()){
            s.push(q.front());
            q.pop();
        }
        
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        
        return q;
}

//approach 2 recursion
//TC SC  O(n)
queue<int> rev(queue<int> q){
    if(q.empty()){
        return q;
    }
    
    int val= q.front();
    q.pop();
    q= rev(q);
    q.push(val);
    
    return q;
} 

int main(){
    
    return 0;
}