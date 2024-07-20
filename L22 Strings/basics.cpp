#include <iostream>
using namespace std;

int length(char name[]){
    int count=0;
    while(name[count]!='\0'){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    name[2]='\0';
    cout<<"Your name is "<<name<<endl;

    cout<<"Enter a string: ";
    cin>>name;
    cout<<"Length of string is: "<<length(name);
    return 0;
}