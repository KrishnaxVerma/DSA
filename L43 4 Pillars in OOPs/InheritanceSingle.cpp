#include <iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class dog : public animal{


};

int main(){
    dog a;
    cout<<a.age<<endl;
    a.speak();
    return 0;
}