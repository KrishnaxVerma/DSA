#include <iostream>
#include<vector>
using namespace std;
void show(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort(vector<int> &v){
    int nz=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            swap(v[i],v[nz]);
            nz++;
        }
    }
}

int main(){
    vector<int> v={0,1,0,3,9,0,888,12};
    sort(v);
    show(v);

    return 0;
}