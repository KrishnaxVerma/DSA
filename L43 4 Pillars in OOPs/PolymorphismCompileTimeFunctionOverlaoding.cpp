//to do function overloading that is functions with same name
//it can only be done by changing change with parameter 

#include <iostream>
using namespace std;

class a{
    public:
    void sayhello(){
        cout<<"Hello Krishna"<<endl;
    }

    void sayhello(string name){
        cout<<"Hello " << name <<endl;
    }

    int sayhello(string name, int n){
        cout<<"Hello " << name <<endl;
        return n;
    }

    //This will not work bcoz they have same name or only differrent return return type

    // void sayhello(){
    //     cout<<"Hello Krishna" <<endl;
    // }

    // int sayhello(){
    //     cout<<"Hello " << name <<endl;
    // }

};

int main(){

    a obj1;
    obj1.sayhello();
    obj1.sayhello("Krishna");
    obj1.sayhello("Krishna",1);
    return 0;
}