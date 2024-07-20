//Static member make data member which belong to class
//It can be access without making object

//Initailize outside class, syntax
//data type class_name :: field_name = value;
//:: is scope resolution operator
#include<iostream>
#include <string.h>
using namespace std;

class hero{
    private:
    int health;

    public:
    char *name;
    char lvl;
    static int timeToComplete;

};

    int hero::timeToComplete=5;

int main(){

    cout<<hero::timeToComplete<<endl;

    hero a;
    cout<<a.timeToComplete<<endl;//not recommended bcoz timeToComplete belongs to class not its object

    hero b;
    b.timeToComplete=10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;
    return 0;
}