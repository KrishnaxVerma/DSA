#include <iostream>
#include <queue>
#include <stack>
using namespace std;

//TC O(N) SC O(K)

queue<int> modifyqueue(queue<int> q, int k){

    //pop first k element from Q and push into stack
    stack<int> s;
    for(int i=0;i<k;i++){
        int val= q.front();
        s.push(val);
        q.pop();
    }

    //fetch from stack and push into Q
    while(!s.empty()){
        int val= s.top();
        q.push(val);
        s.pop();
    }

    //fetch first n-k element from the Q and push back
    int t=q.size()-k;
    while(t--){
        int val= q.front();
        q.pop();
        q.push(val);
    }

    return q;
}

void print(queue<int> q){

    if(q.empty()){
        return ;
    }

    int val= q.front();
    cout<<val<<" ";
    q.pop();
    print(q);
    q.push(val);
}

int main(){
    
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    print(q);
    cout<<endl;
    q=modifyqueue(q,3);

    print(q);
    return 0;
}