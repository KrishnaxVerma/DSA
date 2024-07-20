#include <iostream>
using namespace std;

int squareroot(int n){
    int start=0,end=n;
    int ans;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            start=mid+1;
            ans=mid;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
double floatpart(int n,int precision,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n,precision;
    cout<<"Enter the precison: ";
    cin>>precision;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=squareroot(n);
    float ans=floatpart(n,precision,temp);
    cout<<"The square root of "<<n<<" is "<<ans;

    return 0;
}