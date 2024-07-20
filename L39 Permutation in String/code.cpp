#include <iostream>
#include <vector>
using namespace std;

void solve(string s, int index, vector<string> &ans){

    //base case
    if(index>=s.length()){
        ans.push_back(s);
        return ;
    }

    //solve one case
    for(int i=index;i<s.length();i++){
        swap(s[index],s[i]);
        solve(s,index+1,ans);
        swap(s[index],s[i]);//backtracking
    }
}

void GetPerm(string s, vector<string> &ans){

    int index=0;

    solve(s,index,ans);
}

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    vector<string> ans;

    GetPerm(s,ans);

    //print
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}