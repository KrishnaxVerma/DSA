/*
Address typecasting, also known as pointer typecasting, is a concept in 
programming where you change the data type of a pointer. This doesn’t alter
 the address the pointer holds, but it changes how the computer interprets 
 the variable
*/
#include <iostream>
using namespace std;

int main(){
    int i = 65;
    char* p = (char*)&i;

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    return 0;
}