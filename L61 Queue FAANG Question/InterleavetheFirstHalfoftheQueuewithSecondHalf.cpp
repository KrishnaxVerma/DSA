#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//TC SC O(n)
vector<int> rearrangeQueue(queue<int> &q){
        
        vector<int> ans;
        int n= q.size();
        queue<int> q1;
        
        for(int i=0;i<n/2;i++){
            q1.push(q.front());
            q.pop();
        }
        
        for(int i=0;i<n/2;i++){
            ans.push_back(q1.front());
            q1.pop();
            ans.push_back(q.front());
            q.pop();
        }
        
        return ans;
}

//approach 2
//TC SC O(n) 
vector<int> rearrangeQueue(queue<int> &q){
        
        stack<int> s;
        int n=q.size();
        
        //first half of queue in stack
        for(int i=0;i<n/2;i++){
            s.push(q.front());
            q.pop();
        }
        
        //push stack element in queue
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        
        //first half of queue pop and push in queue
        for(int i=0;i<n/2;i++){
            int val= q.front();
            q.pop();
            q.push(val);
        }
        
        //push first half od queue in stack
        for(int i=0;i<n/2;i++){
            s.push(q.front());
            q.pop();
        }
        
        while(!s.empty()){
            int val= s.top();
            s.pop();
            q.push(val);
            
            val= q.front();
            q.pop();
            q.push(val);
        }
        
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        
        return ans;
}
int main(){
    
    return 0;
}