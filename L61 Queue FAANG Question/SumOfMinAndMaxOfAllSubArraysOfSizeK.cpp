#include <iostream>
#include <queue>
using namespace std;

int solve(int arr[], int n, int k){

    deque<int> maxi(k);
    deque<int> mini(k);

    //Addition of first k size window
    for(int i=0;i<k;i++){

        while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()] >= arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    } 

    int ans=0;
    for(int i=k;i<n;i++){

        ans= ans+ arr[maxi.front()] + arr[mini.front()];

        //next window
        //removal
        while(!maxi.empty() && i-maxi.front()>=k){
            maxi.pop_front();
        }
        while(!mini.empty() && i-mini.front()>=k){
            mini.pop_front();
        }

        //addition

        while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()] >= arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

    //make sure to consider for last window
    ans= ans+ arr[maxi.front()] + arr[mini.front()];

    return ans;
}

int main(){

    int arr[8]={2,5,-1,7,-3,-2,-1,1};
    int k=4;

    cout<<"Sum of MIN and MAX of all sub arrays of size k is: "<<solve(arr,8,k)<<endl;    
    return 0;
}