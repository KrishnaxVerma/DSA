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

    int getlvl(){
        return lvl;
    }

    void sethealth(int h,char psw){
        if(psw=='A'){
        health=h;
        }
    }

    void setlvl(int ch){
        lvl=ch;
    }

};

int main(){
    //creation of object
    hero ramesh;
    char password='A';
    ramesh.sethealth(70,password);
    cout<<"Ramesh health is: "<<ramesh.gethealth()<<endl;

    //cout<<"Health is : "<<ramesh.health<<endl;
    cout<<"Level is : "<<ramesh.lvl<<endl;

    return 0;
}