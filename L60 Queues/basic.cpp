//queue works on the principle of first in first out
#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    queue<int> q;
    q.push(1);
    cout<<"Front of q is: "<<q.front()<<endl;
    q.push(2);
    cout<<"Front of q is: "<<q.front()<<endl;
    q.push(3);
    cout<<"Front of q is: "<<q.front()<<endl;

    cout<<"Size of queue is: "<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is empty"<<endl;
    }
    return 0;


}