#include <iostream>
#include <vector>
using namespace std;
//check palindrome string
//case insensitive & ignore symbol
int len(char name[]){
    int count=0;
    while(name[count]!='\0'){
        count++;
    }
    return count;
}

void lwrcase(char str[],int n){

    for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]-'A'+'a';
        }
    }
    cout<<str<<endl;
}

int symbol(char a){
    if(a>='0'&&a<='9'||a>='a'&&a<='z'||a>='A'&&a<='Z'){
        return 0;
    }
    else{
        return 1;
    }
}
int check(char str[]){

    int s=0,e=len(str)-1;
    lwrcase(str,e+1);
    while(s<=e){
        if(symbol(str[s])){
            s++;
            continue;
        }
        if(symbol(str[e])){
            e--;
            continue;
        }
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
    char str[30];
    cout<<"Enter a character: ";
    cin>>str;

    if(check(str)){
        cout<<"Palindrome string";
    }
    else{
        cout<<"NOT Palindrome string";
    }
    return 0;
}