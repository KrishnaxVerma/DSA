#include <iostream>
#include<vector>
using namespace std;
/*
vector is similar to array. it is used for storing similar data type.
difference is... in vector when it is full and we store another data
it doubles it capacity.

In C++, a vector is a dynamic array that can change its size during runtime, 
allowing for flexibility in storing elements.
The key difference lies in their flexibility: vectors can change size 
dynamically, whereas arrays have a fixed size determined at compile time.
*/
int main(){
    /*
    capacity is the memory assign to the vector
    size is the number of element present int the array
    */
    vector<int> v;

    vector<int> a(5,1);//5 is size and 1 is the value of all element
    cout<<"Print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> b(a);//vector b copies all element of a
    cout<<"Print b"<<endl;
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    cout<<"Size--> "<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();//remove the last element of vector
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear, size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear, size: "<<v.size()<<endl;


    return 0;
}