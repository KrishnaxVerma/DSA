#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(5);
    v.push_back(7);

    //Binary Search
    cout<<"Finding 6--> "<<binary_search(v.begin(),v.end(),6)<<endl;

    /*
    lower bound -
    in array if number is present it will return number
    if not present it will return the next greater number present in array

    right bound -
     no matter if number is present or not it will always return the greater number 
     present in the array
    */

    cout<<"Lower bound of 6 --> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound of 6 --> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3,b=5;
    cout<<"Max: "<<max(a,b)<<endl;
    cout<<"Min: "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a= "<<a<<" b= "<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"String--> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}