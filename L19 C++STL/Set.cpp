/*
sets store only unique elements like if you enter 2 five time it will store it once only
elements in sets cannot be modify it can only be added or be deleted
elements are returned in sorted order

unordered set is faster than set because it randomly return values
*/

#include <iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    cout<<"5 is present or not: "<<s.count(5)<<endl;//it checek whether the element is presnt or not
    cout<<"-5 is present or not: "<<s.count(-5)<<endl;

    set<int>::iterator itr= s.find(5);//it will return the iterator of 5
    cout<<"value present at itr: "<<*itr<<endl; 

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}