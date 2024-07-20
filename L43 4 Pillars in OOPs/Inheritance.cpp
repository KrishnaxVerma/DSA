//Inheritance is giving qualities to child class from parent class
//SYNATX:
//class child_name : mode parent_name


//private data member of parent class cannot be accessed
#include <iostream>
using namespace std;

class human{

    public:
    int height;
    int age;
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    void setweight(int w){
        this->weight=w;
    }
};

class male : public human{

    public: 
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
};

int main(){
    
    male a;

    cout<<a.age<<endl;
    cout<<a.height<<endl;
    cout<<a.color<<endl;

    a.setweight(84);
    cout<<a.weight<<endl;


    a.sleep();
    return 0;
}