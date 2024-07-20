#include <iostream>
#include<deque>
using namespace std;
//deque means doubly ended queue
int main(){

    deque<int> d;
    d.push_front(11);
    d.push_back(12);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    if(d.empty()){
        cout<<"Deque is empty"<<endl;
    }
    else{
        cout<<"Deque is not empty"<<endl;
    }

    return 0;
}