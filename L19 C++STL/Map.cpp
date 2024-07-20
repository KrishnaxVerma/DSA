#include <iostream>
#include<map>
using namespace std;
/*
in map we have keys which store values in them 
keys are unique they can store one value only
*/
int main(){
    map<int,string> m;

    m[1]="heyy";
    m[13]="Krishna";
    m[2]="Verma";

    m.insert({5,"bheem"});//another way to store
    
    cout<<"Before erase: "<<endl;
    for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"finding 13---> "<<m.count(13)<<endl;

    m.erase(13);
    cout<<"After erase: "<<endl;
    for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
    }
    return 0;
}