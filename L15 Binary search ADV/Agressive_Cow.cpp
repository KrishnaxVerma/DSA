#include <iostream>
#include <algorithm>
using namespace std;

bool ispossible(int mid,int stalls[],int size,int c){
    int cowcount=1;
    int lastpos=stalls[0];

    for(int i=0;i<size;i++){
        if(stalls[i]-lastpos>=mid){
            cowcount++;
            if(cowcount == c){
                return true;
            }
            lastpos=stalls[i];
        }
    }
    return false;
}

int aggressivecows(int stalls[],int size,int c){
    sort(stalls,stalls+size);
    int s=0;
    int e=stalls[size-1];
    int ans=-1;
    int mid=s+(e-s)/2;

    while (s<=e)
    {
        if(ispossible(mid,stalls,size,c)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int stalls[5]={4,2,1,3,6};
    int size=sizeof(stalls)/sizeof(int);
    int c=2;//Number of cows
    int ans=aggressivecows(stalls,size,c);
    cout<<ans; 
    return 0;
}