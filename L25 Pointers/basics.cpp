#include <iostream>
using namespace std;

int main(){
    int num=5;
    int *ptr=&num;
    //ptr is a pointer to int
    cout<<"Adress of num is "<<&num<<endl;
    cout<<"Adress of num is "<<ptr<<endl;
    cout<<"Value of num is "<<*ptr<<endl;

    double n=4.3;
    double *p=&n;
    cout<<"Adress of n is "<<&n<<endl;
    cout<<"Adress of n is "<<p<<endl;
    cout<<"Value of n is "<<*p<<endl;

    cout<<"Size of pointer: "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer: "<<sizeof(p)<<endl;
    return 0;
}