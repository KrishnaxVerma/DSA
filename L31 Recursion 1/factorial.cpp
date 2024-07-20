#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){//base condition
        return 1;
    }
    return n*factorial(n-1);//recursive relation
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}