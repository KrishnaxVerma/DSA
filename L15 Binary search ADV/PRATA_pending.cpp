/*
In Ninja Land, there is a famous restaurant named 'CookingNinjas'.
There are 'N' cooks in 'CookingNinjas' numbered from 0 to N-1.
 Each cook has rank 'R' (1 <= R <= 10).A cook with a rank 'R' can 
 prepare 1 dish in the first 'R' minutes, 1 more dish in the next 
 '2R' minutes, 1 more dish in next '3R' minutes, and so on (A cook 
 can only make complete dishes) For example if a cook is ranked 2.
  He will prepare one dish in 2 minutes, one more dish in the next 
  4 mins and one more in the next 6 minutes hence in a total of 12 
  minutes he can make 3 dishes, Note, In 13 minutes also he can make
   only 3 dishes as he does not have enough time for the 4th dish).
One day 'CookingNinjas' receive an order of 'M' dishes that they need
 to complete as early as possible. You are given an integer array 'rank'
  of size 'N' in which 'rank[i]' gives 'rank' of ith cook and an integer 'M',
   You need to find out the minimum times required to complete this order of 'M' dishes.
*/

//wrong ans below
#include <iostream>
#include <algorithm>
#include<limits.h>
using namespace std;

bool ispossible(int rank[],int mid,int m,int size){
    int time=0;
    int dish=0;
    for(int i=0;i<size;i++){
        time=rank[i];
        int j=2;
        while (time<=mid){
            dish++;
            time=time+(rank[i]*j);
            j++;
        }       
    }
    if(dish>=m){
        return true;
    }
    else{
        return false;
    }
}

int time(int n,int m,int rank[],int size){
    sort(rank,rank+size);
    int e=0,s=INT_MAX;
    int ans=0;
    int mid=s+(e-s)/2;

    while(e<=s){
        if(ispossible(rank,mid,m,size)){
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
    int n=4;//Number of cooks
    int m=11;//Number of dishes
    int rank[n]={1,2,3,4};//Ranks of cooks
    int size=sizeof(rank)/sizeof(int);
    int ans=time(n,m,rank,size);
    cout<<"Time to prepare order: "<<ans;
    return 0;
}