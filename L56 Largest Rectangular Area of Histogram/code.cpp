#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;

vector<int> nextsmallerelement(vector<int> &arr, int n){

    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1;i>=0;i--){
        
        int curr= arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i]= s.top();
        s.push(i);
    }

    return ans;
}

vector<int> prevsmallerelement(vector<int> &arr, int n){

    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=0;i<n;i++){
        
        int curr= arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i]= s.top();
        s.push(i);
    }

    return ans;
}

int LargestArea(vector<int> &heights){
    
    int n= heights.size();

    vector<int> next(n);
    next= nextsmallerelement(heights,n);

    vector<int> prev(n);
    prev= prevsmallerelement(heights,n);

    int area= INT_MIN;
    for(int i=0;i<n;i++){
        int l=heights[i];

        if(next[i]==-1){
            next[i]=n;
        }

        int b= next[i]-prev[i]-1;

        int newarea=l*b;
        area=max(area,newarea);
    }
    
    return area;
}

int main(){//TC SC O(n)
    
    vector<int> heights={2,1,5,6,3};

    cout<<"Largset rectangular area in histogram: "<<LargestArea(heights)<<endl;

    return 0;
}