#include <iostream>
#include<vector>
using namespace std;

void printvec(vector<int> v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
    printvec(v);
        cin>>x;
        v.push_back(x); //O(1)
    }
    printvec(v);
    return 0;
}