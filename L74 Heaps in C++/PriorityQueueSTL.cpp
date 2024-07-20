#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    cout<<"Using Priority Queue here"<<endl;

    // max heap
    priority_queue<int> pq;

    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(9);

    cout<<"Element at top: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element at top: "<<pq.top()<<endl;
    cout<<"Size is: "<<pq.size()<<endl;

    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }
    else{
        cout<<"pq is not empty"<<endl;
    }


    //min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(3);
    minheap.push(2);
    minheap.push(5);

    cout<<"Element at top: "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"Element at top: "<<minheap.top()<<endl;
    cout<<"Size is: "<<minheap.size()<<endl;

    if(minheap.empty()){
        cout<<"minheap is empty"<<endl;
    }
    else{
        cout<<"minheap is not empty"<<endl;
    }

    return 0;
}