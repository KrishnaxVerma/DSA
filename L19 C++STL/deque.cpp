/*
A deque is a double-ended queue, which is a sequence container 
that allows fast insertion and deletion at both its beginning and its end. 
*/

#include <iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);//add from back
    d.push_front(2);//add from front

    d.pop_back();//delete from back
    cout<<"After pop_back: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_front();//delete from front
    cout<<"After pop_front: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.push_back(1);
    d.push_front(2);

    cout<<"Print first element of deque: "<<d.at(1)<<endl;

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    cout<<"before erase size: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);//we have to mention the range to erase
    //in this case we deleted first element
    //capacity will remain same
    cout<<"before erase size: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}