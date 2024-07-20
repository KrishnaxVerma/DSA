#include <iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    char lvl;

    hero(){
        cout<<"Simple consrtuctor is called"<<endl;
    }

    //user defined copy constructor
    //making this in-built copy construcot will be destroyed
    hero(hero &temp){
        cout<<"My copy constructor is called"<<endl;
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
        cout<<"Health "<<this->health<<endl;
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

};

int main(){

    hero s(60,'C');
    s.print();

    //copy constructor
    hero r(s);
    r.print();
    return 0;
}