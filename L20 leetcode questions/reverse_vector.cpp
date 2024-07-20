#include <iostream>
#include<vector>
using namespace std;

vector<int> rev(vector<int> v){
    for(int i=0;i<v.size()/2;i++){
        swap(v[i],v[v.size()-i-1]);
    }
    return v;
}
void show(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    cout<<"Printing array:\n";
    show(v);
    vector<int> ans=rev(v);

    cout<<"Printing reversed array:\n";
    show(ans);
    return 0;
}