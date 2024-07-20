#include <iostream>
#include <vector>
using namespace std;

int len(char name[]){
    int count=0;
    while(name[count]!='\0'){
        count++;
    }
    return count;
}

int check(char str[]){
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