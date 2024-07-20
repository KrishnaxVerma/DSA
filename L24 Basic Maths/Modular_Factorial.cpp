#include <iostream>
using namespace std;

int long long fac(int n){

    int m=1000000000+7;
    if(n<=1){
        return 1;
    }
    int long long ans=(n%m)*(fac(n-1)%m)%m;
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Factorial is: "<<fac(n)<<endl;
    return 0;
}