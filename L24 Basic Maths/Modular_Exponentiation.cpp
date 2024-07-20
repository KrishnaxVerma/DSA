#include <iostream>
using namespace std;

int ans(int x,int n,int m){
    int res=1;
    while(n>0){
        if(n&1){//odd
        res=(1LL*(res%m)*(x%m))%m;
        }
        x=(1LL*(x%m)*(x%m))%m;
        n=n>>1;

    }
    return res;
}// 1LL* means typecasting to long double
int main(){
    int x,n,m;
    cout<<"Enter x,n,m: "<<endl;
    cin>>x>>n>>m;
    //ans=x^n%m
    cout<<ans(x,n,m);
    return 0;
}