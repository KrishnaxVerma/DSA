#include <iostream>
using namespace std;

int main(){
    int arr[10]={0,1,2,3,4,5,6,7};
    cout<<"Address of first memory block is: "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is: "<<&arr[0]<<endl;

    cout<<"4th "<<*arr<<endl;
    cout<<"5th " <<*arr+1<<endl;
    cout<<"6th " <<*(arr+1)<<endl;

    // for compiler arr[i] = *(arr+ i)
    // also true for i[arr]=*(i+arr)

    int i=3;
    cout<<arr[i]<<" "<<i[arr]<<endl;
    return 0;
}