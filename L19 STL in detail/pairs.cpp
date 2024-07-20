#include <iostream>
#include<utility>
using namespace std;

int main(){
    pair<int,string> p;
    p= {2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> &p1=p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;


    int a[]={1,2,3};
    int b[]={1,2,3};
    pair<int, int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};

    swap(p_array[0],p_array[2]);

    for (int i = 0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    {
    return 0;
}
//output
/*
2 abc
3 abc
3 4
2 3 
1 2
*/