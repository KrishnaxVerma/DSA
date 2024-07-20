#include <iostream>
using namespace std;

int compress(string &s){

    int i=0;
    int ansindex=0;
    int l=s.size();

    while(i<l){
        int j=i+1;
        while(j<l && s[i]==s[j]){
            j++;
        }
        s[ansindex++]=s[i];
        int count=j-i;

        if(count>1){
            string cnt =to_string(count);
            for(char ch: cnt){
                s[ansindex++]=ch;
            }
        }
        i=j;
    }
    s.resize(ansindex);
    return ansindex;
}
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;

    cout<<compress(s)<<endl;
    cout<<s;
    return 0;
}