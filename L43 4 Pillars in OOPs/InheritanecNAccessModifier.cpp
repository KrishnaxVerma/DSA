//Protected access modifier is similar to private
//It can be accessed by it own class as well as the parent class


/*
CODING NINJAS INHERITANCE REFERENCE
https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118817/offering/1382199
(Read the table)
*/

//to access protected or private member use setter/getter
#include <iostream>
using namespace std;

class human{

    private:
    int height;
    public:
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

class male : private human{

    public: 
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }

    int getheight(){
        return this->height;
    }
};

int main(){
    
    male a;

    //cout<<a.height<<endl; //will not work
    //cout<<a.getheight()<<endl;
    return 0;
}