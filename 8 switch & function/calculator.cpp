#include <iostream>
using namespace std;

int main(){
    float a,b;
    char op;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Enter operator: ";
    cin>>op;
    switch(op){
        case '+':
        cout<<a<<"+"<<b<<"="<<a+b;
        break;
        case '*':
        cout<<a<<"*"<<b<<"="<<a*b;
        break;
        case '-':
        cout<<a<<"-"<<b<<"="<<a-b;
        break;
        case '/':
        cout<<a<<"/"<<b<<"="<<a/b;
        break;
        case '%':
        cout<<a<<"%"<<b<<"="<<((int)a%(int)b);
        break;
        default:
        cout<<"Entered operator is invalid";
        break;

    }
    return 0;
}