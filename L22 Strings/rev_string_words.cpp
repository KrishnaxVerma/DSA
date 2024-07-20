#include <iostream>
using namespace std;

void rev(string &str,int s,int e){
    while(s<e){
        swap(str[s++],str[e--]);
    }
}
int len(string s){
    int count=0;
    while(s[count]!='\0'){
        count++;
    }
    return count;
}
int main(){
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);
    rev(str,0,len(str)-1);
    int i=0,s=0,e=0;
    while(str[i]!='\0'){
        while(str[i]!='\0' && str[i]!= ' '){
            e++;
            i++;
        }
        rev(str,s,e-1);
        e++;
        s=e;
        i++;
    }
    cout<<str;
    return 0;
}