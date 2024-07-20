//Encapsulation is wrapping up data member and function
//Data member is property/state and function is method/behaviour

//Fully Encapsulated class is a class in which all data members are private
//Means all data members are accessed only int the class

//in lamen language encapsulation means data/information hiding

//WHY ENCAPSULATION??, ADVANTAGES-->
//data hide-> security increase
//If we want we can make class read only
//Code reusability
//unit testing
#include <iostream>
using namespace std;

class student{

    private:
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};

int main(){
    
    student first;

    cout<<"Everything is Okay"<<endl;
    return 0;
}