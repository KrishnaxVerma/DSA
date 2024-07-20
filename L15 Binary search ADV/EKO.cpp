#include <iostream>
#include<algorithm>
using namespace std;

bool ispossible(int mid,int trees[],int size,int m){
    int wood=0;
    for(int i=0;i<size;i++){
        if(trees[i]-mid>0){
            wood=wood+(trees[i]-mid);
        }
    }
    if(wood>=m){
        return true;
    }
    else{
        return false;
    }

}

int maxheight(int trees[],int size,int m){
    sort(trees,trees+size);
    int s=trees[0],e=trees[size-1];
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(ispossible(mid,trees,size,m)){
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
    int trees[5]={4,42,40,26,46};
    int m=20;//meters of wood mirko needs
    int size=sizeof(trees)/sizeof(int);
    int ans=maxheight(trees,size,m);
    cout<<ans;
    return 0;
}