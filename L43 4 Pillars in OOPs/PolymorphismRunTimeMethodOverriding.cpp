/*
Rules for method overriding:

The parent class method and the method of the child class must have the same name.

The parent class method and the method of the child class must have the same parameters.

It is possible through inheritance only.
*/

#include <iostream>
using namespace std;

class animal{
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class dog : public animal{
    public: 
    void speak(){// eithout this function the output will be "Speaking"
        cout<<" Barking"<<endl;
    }
};
int main(){
    
    dog a;
    a.speak();
    return 0;
}