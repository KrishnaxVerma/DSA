#include <iostream>
#include<array>
using namespace std;

int main(){
    int baisc[3]={1,2,3};

    array<int,3> a={3,2,1};
    int size= a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<"Element at 2nd index: "<<a.at(2)<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl;

    cout<<"First element is: "<<a.front()<<endl;
    cout<<"Last element is: "<<a.back()<<endl;

    return 0;
}