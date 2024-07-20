#include <iostream>
using namespace std;

//two pointer method
bool checkpal(string s,int start,int end){

    if(end<start){
        return true;
    }

    if(s[start]!=s[end-1]){
        return false;
    }
    else{
    return checkpal(s,start+1,end-1);
    }
}

//single pointer method
bool checkpal2(string s, int i){
    int l=s.length();

    if(i==l/2){
        return true;
    }

    if(s[i]!=s[l-i-1]){
        return false;
    }
    else{
        return checkpal2(s,i+1);
    }
}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;

    int l=s.length();

    //bool ans=checkpal(s,0,l);
    bool ans=checkpal2(s,0);
    if(ans){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}