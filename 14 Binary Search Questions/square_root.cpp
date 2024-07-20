#include <iostream>
using namespace std;

int sqrt(int n){ //Time complexity is O(√N)
    int ans=0;
    for(int i=0;i*i<=n;i++){
        ans=i;
    }
    return ans;
}
long long int squareroot(int n){
    int start=0,end=n;
    long long int ans,mid=start+(end-start)/2;

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
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Square root of "<< n <<" is: " <<squareroot(n);
    return 0;
}