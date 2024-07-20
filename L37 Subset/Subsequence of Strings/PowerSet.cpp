#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums,int index, vector<int> output,vector<vector<int>> &ans){

    //base case
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }

    //include
    solve(nums,index+1,output,ans);

    //exclude
    int element = nums[index];
    output.push_back(element);
    solve(nums,index+1,output,ans);
}

void GetPowerset(vector<int> nums, vector<vector<int>> &ans){

    vector<int> output;

    int index=0;
    solve(nums,index,output,ans);
}

int main(){
    vector<int> nums={1,2,3,4,5};
    vector<vector<int>> ans;
    GetPowerset(nums,ans);

    //print power set
    int a=1;
    for(int i=0;i<ans.size();i++){
        cout<<a<<"."<<"{ ";
        a++;
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
            
        }
        cout<<"}"<<endl;
    }
    return 0;
}