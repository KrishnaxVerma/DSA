#include <iostream>
using namespace std;

int score=99;//global variable
void a(){
    cout<<score<<" in a"<<endl;
}
int main(){
    cout<<score<<" in main"<<endl;
    a();
    return 0;
}

/*
Use of global varibale be avoided as change in value of variable
in any function will reflect back in other function also

INSTEAD whenever we want to share a variable between two or more funciton
use reference variable
*/