#include <iostream>
#include<vector>

using namespace std;

void show(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> merge(vector<int> a,vector<int> b){
    int i=0,j=0,k=0;
    vector<int> ans;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){
            ans.push_back(a[i++]);
        }
        else{
            ans.push_back(b[j++]);
        }
    }
    while(i<a.size()){
        ans.push_back(a[i++]);
    }
    while(j<b.size()){
        ans.push_back(b[j++]);
    }
    return ans;
}

int main(){
    vector<int> a={1,2,3,0,0,0};
    vector<int> b={2,5,6};
    vector<int> ans=merge(a,b);
    show(ans);
    return 0;
}