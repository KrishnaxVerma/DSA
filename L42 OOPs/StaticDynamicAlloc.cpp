//getter fetch value
//setter sets value and can also apply condition

#include <iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    char lvl;

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
    //Statically
    hero a;
    a.sethealth(70);
    a.setlvl('A');

    cout<<"Health is "<<a.gethealth()<<endl;
    cout<<"Level is "<<a.getlvl()<<endl;

    //Dynamically
    hero *b= new hero;

    (*b).sethealth(80);
    (*b).setlvl('B');

    cout<<"Health is "<<(*b).gethealth()<<endl;
    cout<<"Level is "<<(*b).getlvl()<<endl;

    b->sethealth(80);
    b->setlvl('B');

    cout<<"Health is "<<a.gethealth()<<endl;
    cout<<"Level is "<<a.getlvl()<<endl;
    return 0;
}