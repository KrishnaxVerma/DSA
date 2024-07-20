//this keyword is a pointer which points toward the address of object(ramesh)
#include <iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    char lvl;

    hero(int health){//parametrised constructor

        cout<<"Value of this "<<this<<endl;

        //health=health; //how to differentiate
        this->health =health;//first one is of class second one is of parameter
    }

    hero(int health, char lvl){

        this->health=health;
        this->lvl=lvl;
    }

    void print(){
        cout<<health<<endl;
        cout<<lvl<<endl;
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

  //  hero tt; //This will throw error bcoz we made parameterized constructor in the class
    //that will delete the default constructor

    hero ramesh(70);
    cout<<"Address of ramesh "<<&ramesh<<endl;
    cout<<"Health is "<<ramesh.gethealth() <<endl;

    hero temp(55,'B');
    temp.print();
    return 0;
}