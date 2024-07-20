//Destructor deallocate memory occupied by class object after the scope ends
//It has same name as class 
//It has no return type and no parameter
//To diiferentiate between constructor and distructor ~ symbol is used 

//object made by static allocation for them destructor is called automatically
//object created from dynamic allocation destructor are called manually
#include <iostream>
#include <string.h>
using namespace std;

class hero{
    private:
    int health;

    public:
    char *name;
    char lvl;

    hero(){
        cout<<"Simple consrtuctor is called"<<endl;
        name =new char[100];
    }


    hero(int health){
        cout<<"Value of this "<<this<<endl;
        this->health =health;
    }

    hero(int health, char lvl){

        this->health=health;
        this->lvl=lvl;
    }

    void print(){
        cout<<"Name "<<this->name<<", ";
        cout<<"Health "<<this->health<<", ";
        cout<<"Level "<<this->lvl<<endl;
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

    void setname(char *name){
        this->name=name;
    }

    ~hero(){
        cout<<"Destructor is called "<<endl;
    }
};

int main(){

    //static
    hero a;

    //dynamic
    hero *b= new hero;
    //destructor is called
    delete b;
    return 0;
}