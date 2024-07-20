//when a class inherit two parent class which contain same function
//this is how we access them differently

#include <iostream>
using namespace std;

class a{
    public:

    void func(){
        cout<<"I am A"<<endl;
    }
};

class b{
    public:

    void func(){
        cout<<"I am B"<<endl;
    }
};

class c: public a, public b{

};

int main(){
    
    c obj1;

    obj1.a::func();
    obj1.b::func();
    return 0;
}