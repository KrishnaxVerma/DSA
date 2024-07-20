//add @40 in place of spaces
#include <iostream>
#include <cstring>
using namespace std;

string modify1(string &s){
    int l=s.length();
    string temp="";
    for(int i=0;i<l;i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
            }
        else{
            temp.push_back(s[i]);
        } 
    }
    return temp;
}
void modify2(string &s){
    int l = s.length();
    for(int i = 0; i < l; i++){
        if(s[i] == ' '){
            s.resize(l+2);
            for(int j = l - 1; j > i; j--){
                s[j + 2] = s[j];
            }
            s[i] = '@';
            s[i + 1] = '4';
            s[i + 2] = '0';  
            l+=2; 
            i+=2;
        }
    }
}


int main(){
    string s;
    cout<<"Enter a character: "<<endl;
    getline(cin,s);

    cout<<modify1(s)<<endl;//using temp space
    modify2(s);//without using temp space
    cout<<s;
    return 0;
}