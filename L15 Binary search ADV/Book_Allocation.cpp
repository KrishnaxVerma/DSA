#include <iostream>
using namespace std;

bool ispossible(int mid,int arr[],int size,int m){
    int pagesum=0;
    int studentcount=1;

    for(int i=0;i<size;i++){
        if(pagesum+arr[i]<=mid){
            pagesum=pagesum+arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            else{
                pagesum=arr[i];
            }
        }
    }
    return true;
}

int allocate(int arr[],int size,int m){
    int s=0;
    int e=0;
    int ans=-1;
    for(int i=0;i<size;i++){
        e=e+arr[i];
    }
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(mid,arr,size,m)){
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
    int arr[4]={10,20,30,40};
    int m=2;//number of student
    int ans= allocate(arr,4,m);
    cout<<ans;
    return 0;
}
