/*
why we use
int* ptr for pointer instead of 
pointer ptr
bcoz
1.it gives the data type to which the pointer is pointing
2.kitni byte ko consider krna hai ye bhi clear ho jatat hai
*/
#include <iostream>
using namespace std;

int main(){
    int i=5;
    int* p=&i;
    int **p2=&p;

    cout<<"printing p "<<p<<endl;

    cout<<*p2<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    return 0;
}