#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //GO THROUGH NOTES
    
    //Unordered map does not preserve order of insertion but map do

    //creation
    unordered_map<string, int> m;

    //insertion

    //1
    pair<string, int> p= make_pair("babbar", 3);
    m.insert(p);

    //2
    pair<string, int> p2("love", 2);
    m.insert(p2);

    //3
    m["mera"]= 1;

    //updation
    m["mera"]= 2;

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;


    // cout<<m.at("unknownkey")<<endl; //will throw error
    cout<<m["unknownkey"]<<endl; //0
    cout<<m.at("unknownkey")<<endl; //now from above entry is created it will give 0

    //search
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("bro")<<endl;

    //erase
    m.erase("love");
    cout<<m.size()<<endl;

    //traverse
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //iterator
    unordered_map<string, int> :: iterator it= m.begin();
    
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }


    return 0;
}