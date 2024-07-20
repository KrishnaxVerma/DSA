/*
Whenever we declare a constructor is invoked
it has no parameter and no return type
it involve object creation
*/
#include <iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    char lvl;

    hero(){//default or inbuilt constructor got destroyed bcoz we made a constructor
        cout<<"construction called"<<endl;
    }
    int gethealth(){
        return health;
    }

    char getlvl(){
        return lvl;
    }

    void sethealth(int h){
        health=h;
    }

    void setlvl(int ch){
        lvl=ch;
    }

};

int main(){
    
    cout <<"hi"<<endl;
    hero a;
    cout<<"Hello"<<endl;

    hero *b= new hero;
    return 0;
}