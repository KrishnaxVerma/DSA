#include <iostream>
#include <string>
using namespace std;

//double pointer method
void revstr(string &s,int start,int end){

    if(end<start){
        return; 
    }

    swap(s[start],s[end-1]);

    revstr(s,start+1,end-1);

}

//single pointer method
void revstr2(string &s,int i){
    int l=s.length();

    if(i==l/2){
        return; 
    }

    swap(s[i],s[l-i-1]);

    revstr2(s,i+1);

}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;

    int l=s.length();
   revstr(s,0,l);
    revstr2(s,0);
    cout<<s;
    return 0;
}