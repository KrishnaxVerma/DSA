#include <iostream>
using namespace std;

class hero{
    //properties
};
class hero2{
    int a;
};

int main(){

    hero h1;
    cout<<sizeof(h1)<<endl;//1 for identification
    
    hero2 h2;
    cout<<sizeof(h2)<<endl;//4 total size of properties
    return 0;
}