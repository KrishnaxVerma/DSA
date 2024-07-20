#include <iostream>
using namespace std;

bool ispossible(int mid,int arr[],int k,int size){
    int paintercount=1;
    int paintingsum=0;
    for(int i=0;i<size;i++){
        if(paintingsum+arr[i]<=mid){
            paintingsum=paintingsum+arr[i];
        }
        else{
            paintercount++;
            if(paintercount>k || arr[i]>mid){
                return false;
            }
            else{
                paintingsum=arr[i];
            }
        }
    }
    return true;
}

int allocate(int arr[],int k,int size){
    int s=0;
    int e=0;
    int ans=-1;
    for(int i=0;i<size;i++){
        e=e+arr[i];
    }
        int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(mid,arr,k,size)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int arr[6]={2,1,2,4,5,6};
    int k=2;//Number of painters
    int ans=allocate(arr,k,6);
    cout<<ans;
    return 0;
}