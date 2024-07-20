#include <iostream>
using namespace std;

int remdup(string &s){
    int l=s.length();

    int x=1;
    for(int i=0;i<l-1;i++){
        if(s[i]==s[i+1]){
            for(int j=i;j<l-2;j++){
                s[j]=s[j+2];
            }
            l=l-2;
            x=0;
            i--;
        }
    }
    s.resize(l);//adjust the size of string
    return x;
}
void check(string &s){

    while(1){
        if(remdup(s)){
            break;
        }
    }
}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    check(s);
    cout<<s;
    return 0;
}