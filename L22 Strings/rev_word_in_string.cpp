#include <iostream>
using namespace std;

void rev(string &str,int s,int e){
    while(s<e){
        swap(str[s++],str[e--]);
    }
}
int main(){
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);
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