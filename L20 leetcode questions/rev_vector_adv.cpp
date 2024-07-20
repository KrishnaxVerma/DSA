#include <iostream>
#include<vector>
using namespace std;

void show(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> rev(vector<int> v,int index){
    int s=index,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};


    cout<<"Printing array:\n";
    show(v);
    int index;
    cout<<"Enter the index from where you want to reverse the vector: ";
    cin>>index;
    vector<int> ans=rev(v,index);

    cout<<"Printing reversed array:\n";
    show(ans);
    return 0;
}