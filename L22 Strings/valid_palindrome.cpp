#include <iostream>
using namespace std;

int len(string s){
    int count=0;
    while(s[count]!='\0'){
        count++;
    }
    return count;
}

int rem(char a){
    if(a>='0'&&a<='9'||a>='a'&&a<='z'||a>='A'&&a<='Z'){
        return 1;
    }
    else{
        return 0;
    }

}

void lwrcase(string &str){
    int n=len(str);
    for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]-'A'+'a';
        }
    }
}

int check(string str){
    int s=0,e=len(str)-1;
    while(s<e){
        if(str[s]!=str[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;   
}

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    //remove garbage elements
    
    string temp;
    for(int i=0;i<len(s);i++){
        if(rem(s[i])){
        temp.push_back(s[i]);
        }
    }
    cout<<temp<<endl;

    //convert to lower case

    lwrcase(temp);
    cout<<temp<<endl;

    //check palindrome

    if(check(temp)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;

    }



    return 0;
}