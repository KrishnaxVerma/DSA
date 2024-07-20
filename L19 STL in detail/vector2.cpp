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
    vector<int> v(10,3);
    v.push_back(7);
    printvec(v);
    v.pop_back();
    printvec(v);
    
    return 0;
}