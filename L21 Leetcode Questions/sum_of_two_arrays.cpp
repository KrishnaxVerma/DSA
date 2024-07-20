#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverse(vector<int> ans){
    int s=0,e=ans.size()-1;
    while(s<=e){
        swap(ans[s++],ans[e--]);
    }
    return ans;
}
vector<int> sum(vector<int> a,vector<int> b){
    vector<int> ans;
    int i=a.size()-1;
    int j=b.size()-1;
    int carry=0;

    while(i>=0 && j>=0){
        int sum=carry+a[i]+b[j];
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i>=0){
        ans.push_back(a[i]+carry);
        carry=carry/10;
        i--;   
    }
    while (j>=0){
        ans.push_back(b[j]+carry);
        carry=carry/10;
        j--;   
    }
    while(carry!=0){
        ans.push_back(carry);
        carry=carry/10;
    }

    //reverse(ans.begin(),ans.end()); //reverse built in algorithm
   
    return reverse(ans);
    
}
int main(){
    vector<int> a={2,3};
    vector<int> b={7,1,1,0};
    vector<int> r=sum(a,b);

    for(int i=0;i<r.size();i++){
        cout<<r[i];
    }
    return 0;
}