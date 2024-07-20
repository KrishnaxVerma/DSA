#include <iostream>
#include<list>
using namespace std;

    int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    list<int> m(l);//copies list

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());//erase the element 
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of list: "<<l.size()<<endl;

    list<int> n(5,100);
    cout<<"printing n: "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}