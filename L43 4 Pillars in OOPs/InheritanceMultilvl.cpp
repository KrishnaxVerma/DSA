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

class GermanShephard : public dog{

};
int main(){
    GermanShephard g;
    g.speak();
    return 0;
}