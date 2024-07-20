#include <iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;
}
void updatep(int *p){
    p=p+1;
    cout<<"Inside "<<p<<endl;
}
void updatev(int *p){
    *p=*p+1;
}

int getsum(int arr[],int n){
    cout<<"Size of arr in function: "<<sizeof(arr)<<endl;
    //This is because arr is a pointer in this function
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int value=5;
    int *ptr=&value;
    print(ptr);

    cout<<"Before "<<ptr<<endl;
    updatep(ptr);
    cout<<"After "<<ptr<<endl;

    cout<<"Before "<<*ptr<<endl;
    updatev(ptr);
    cout<<"After "<<*ptr<<endl;

    int arr[6]={1,2,3,4,5,6};
    cout<<"Sum is "<<getsum(arr,6)<<endl;
    cout<<"Sum is "<<getsum(arr+3,3)<<endl;
    return 0;
}