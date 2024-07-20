#include <iostream>
#include<vector>
using namespace std;

int main(){
    //auto automatically assume the data type according to the input given
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4},{4,5},{5,6}};

    for(auto &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
        value.first++;
    }
    cout<<endl;
    for(auto &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
        
    }
    return 0;
}