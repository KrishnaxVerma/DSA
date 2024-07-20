#include <iostream>
using namespace std;

class hero{
    int health;//4
    char lvl;//1
};//total 5

int main(){
    hero ramesh;
    cout<<"Size of Ramesh is : "<<sizeof(ramesh);//BUT 8, why
    return 0;
}