#include <iostream>
using namespace std;

int main(){
    /*
    int *ptr;
    ptr=&a;

    this is a bad practice never do this 
    TRY THIS

    NULL POINTER
    int *ptr=0;
    */
    int i=5;
    int *ptr=0;
    ptr=&i;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int num=5;
    int *p=&num;
    cout<<"Before "<<num<<endl;
    (*p)++;
    cout<<"After "<<num<<endl;

    //Copying a pointer
    int *q=p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;

    //pointer arithmetic
    int r=5;
    int *t=&r;
    cout<<"Before t "<<t<<endl;
    *t++;
    cout<<"After t "<<t<<endl;
    return 0;
}