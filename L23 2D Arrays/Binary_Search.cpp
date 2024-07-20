#include <iostream>
using namespace std;

int bs(int arr[][4],int r,int c,int t){
    int s=0,e=r*c-1;
    int mid=s+(e-s)/2;
    while(s<=e){

        int element=arr[mid/c][mid%c];

        if(element==t){
            return mid;
        }
        else if(element>t){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    mid=s+(e-s)/2;
    }
    return -1;
}
int main(){//array is row wise sorted
    int arr[3][4]={{1,3,5,7},
                   {10,11,13,15},
                   {20,25,27,30}};

    int target=27;
    int ans=bs(arr,3,4,target);
    if(ans==-1){
        cout<<"Not found";
    }
    else{
    cout<<"Index is: "<<ans/4<<" "<<ans%4;
    }
    return 0;
}