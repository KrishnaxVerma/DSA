//gcd(a,b)=gcd(a-b,b) if a>b
//lcm(a,b)*hcf(a,b)=a*b
#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    else if(a>b){
        return gcd(a-b,b);
    }
    else{
        return gcd(b-a,a);
    }
}
int gcdloop(int a,int b){
    
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"HCF: "<<ans<<endl;
    cout<<"LCM: "<<a*b/ans<<endl;
    cout<<"HCF using loop: "<<gcdloop(a,b);
    return 0;
}