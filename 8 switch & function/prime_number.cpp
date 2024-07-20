#include <iostream>
using namespace std;

bool prime(int n){
    if(n<2)
    return 0;
     
    for(int i=2;i<n;i++){
        if(n%i==0)
    {
        return 0;
    }
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(prime(n)==1)
    cout<<n<<" is a prime number";
    else
    cout<<n<<" is not a prime number";
    return 0;
}