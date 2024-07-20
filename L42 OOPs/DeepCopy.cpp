//user defined copy constructor do deep copy
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

    //User defined copy constructor
    hero(hero &temp){
        cout<<"My copy constructor is called"<<endl;

        char *ch= new char[strlen(temp.name)+1];//+1 for null character
        strcpy(ch,temp.name);
        this->name=ch;

        this->health=temp.health;
        this->lvl=temp.lvl;
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

};

int main(){

    hero hero1;
    hero1.sethealth(22);
    hero1.setlvl('D');

    char name[8]="Krishna";
    hero1.setname(name);

    hero1.print();

    //default copy constructor is called
    hero hero2(hero1);
    hero2.print();

    hero2.name[0]='P';
    hero2.print();

    hero1.print();//correct name is displayed bcoz this time entirely 
    //new array for name is created
    return 0;
}