//List of operator that can be overloaded
//https://www.codingninjas.com/studio/guided-paths/oops-in-c/content/274159/offering/3757648?leftPanelTabValue=NOTE&customSource=studio_nav

//SYNTAX
//in a+b ,b is input argument, a is current object
//return_type operator + (input argument){

//We can use + sign to subtract or display hello

#include <iostream>
using namespace std;

class B{
    public:
    int a,b;

    public:
    void add(){
        cout<<a+b<<endl;
    }

    void operator + (B &obj1){
        int value1= this->a;//current object
        int value2= obj1.a;//input argument
        cout<<"Output: "<<value2-value1<<endl;

        cout<<"Hello Krishna"<<endl;
    }

    void operator() (){
        cout<<"I am bracket "<<this->a<<endl;
    }
};

int main(){

    B obj1,obj2;

    obj1.a=4;
    obj2.a=99;

    obj1+obj2;  

    obj1();  
    return 0;
}