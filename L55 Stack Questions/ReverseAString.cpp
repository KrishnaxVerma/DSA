#include <iostream>
#include <stack>
using namespace std;

//SC TC O(n)
int main(){
    
    string str;
    
    cout<<"Enter a string :";
    cin>>str;

    stack<char> s;

    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    
    string ans="";
    while(!s.empty()){
        char ch= s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<ans;
    return 0;
}