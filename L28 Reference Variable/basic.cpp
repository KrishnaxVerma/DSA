#include <iostream>
using namespace std;

void update(int &n){//this is call by reference 
//Ek hi memory ko main ka n and update ka n point kar rahe hai
    n++;
}
int main(){
    int i=5;
    //creating a reference variable
    int &j=i;
    //ek hi memory block ke do alag alag naam
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    cout<<endl<<endl;

    int n=10;
    cout<<"Before "<< n <<endl;
    update(n);
    cout<<"After "<< n <<endl;
    return 0;
}