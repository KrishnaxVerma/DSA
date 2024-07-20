/*
https://www.codingninjas.com/studio/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallElement(vector<int> &arr, int n){

    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1;i>=0;i--){
        
        int curr= arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        //ans is stack ka top
        ans[i]= s.top();
        s.push(curr);
    }

    return ans;
}

int main(){
    
    vector<int> arr={5,7,2,9,8,1,2,1,4,3};

    vector<int> ans=nextSmallElement(arr,arr.size());

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}