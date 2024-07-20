//Macro is a piece of code in a code that is replaced by value of macro
#include <iostream>
using namespace std;

#define PI 3.14//this value cannot be updated by PI++;
int main(){
    
    int r=5;
    //double PI=3.14;// no need to take extra space
    double area=PI*r*r;
    cout<<area;
    return 0;
}