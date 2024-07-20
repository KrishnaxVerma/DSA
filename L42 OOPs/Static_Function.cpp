//in Static fucntion no need to create object
//they dont have this keyword bcoz
//this keyword is a pointer to current object which static function dont have
//Static function can access only static member
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

    static int random(){
        return timeToComplete;
    }//other members cannot be accessed

};

int hero::timeToComplete=5;

int main(){

    cout<<hero::random()<<endl;
    
    return 0;
}