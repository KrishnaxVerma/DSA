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

int maxArea(vector<vector<int>> &M, int n, int m){

    //compute area for first row
    int area= LargestArea(M[0]);

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){

            //row update: by adding previous row's value
            if(M[i][j]!=0){
                M[i][j]= M[i][j]+ M[i-1][j];
            }
            else{
                M[i][j]=0;
            }
        }
        //entire row is updated now

        area= max(area,LargestArea(M[i]));
    }

    return area;
}

//TC O(nm) SC O(m)
int main(){
    
    vector<vector<int>> M={{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};

    int n=M.size();
    int m=M[0].size();
    int ans=maxArea(M,n,m);

    cout<<"Rectangle with maximum area is: "<<ans<<endl;
    return 0;
}