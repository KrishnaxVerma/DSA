#include <iostream>
using namespace std;

int main(){
    //size of int array = size of int * size of array
    //size of pointer = 8 (dont know why 4 is showing)

    int temp[10];

    cout<<"TEMP"<<endl<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;

    int*ptr=&temp[0];
    cout<<"PTR"<<endl<<sizeof(ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;

    //& operator gives different result for both
    int a[20]={1,2,3,4,5};
    int *p=&a[0];
    cout<<&a[0]<<endl;
    cout<<&p<<endl;

    //content of symbol table cannot be changed
    /*
    int arr[10];
    arr=arr+1;  is not valid
    BUT
    int *p=arr;
    p=p+1 is a valid statement
    */
   p=p+1;
   cout<<p; 
    return 0;
}