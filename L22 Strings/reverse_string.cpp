#include <iostream>
using namespace std;

int length(char name[]){
    int count=0;
    while(name[count]!='\0'){
        count++;
    }
    return count;
}

void rev(char str[]){
    int s=0,e=length(str)-1;
    while(s<=e){
        swap(str[s++],str[e--]);
    }
    
}
int main(){
    char str[30];
    cout<<"Enter a string: ";
    cin>>str;
    rev(str);
    cout<<"Reverse: "<<str;

    return 0;
}