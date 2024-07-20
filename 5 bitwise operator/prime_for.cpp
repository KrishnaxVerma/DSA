#include<iostream>
using namespace std;

int main(){
    int n,x=0;
    cout<<"Enter number:"<<endl;
    cin>>n;
    
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        x=1;
    }
    if(x==0){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
    return 0;
}