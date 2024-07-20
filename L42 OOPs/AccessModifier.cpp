/*
Access Modifier
-public: can be access anywhere
-private: can be access in the class only
-protected

//by default in class access modifier is private
*/

#include <iostream>
using namespace std;

class hero{
    public:
    int health;
    char lvl;

    private://scope within class only
    char name[100];
     
    void print(){
        cout<<name<<endl;
    }
};

int main(){
    
    hero ramesh;

    ramesh.health =80;
    ramesh.lvl ='A';

    cout<<"Health is : "<<ramesh.health<<endl;
    cout<<"Level is : "<<ramesh.lvl<<endl;

//  cout<<name<<endl; //throws error
    return 0;
}