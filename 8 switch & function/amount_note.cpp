#include <iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter an amount: ";
    cin>>amount;
    int hun,fif,twen,one;
    cout<<"Number of hundred rupee note: "<<amount/100<<endl;
    amount=amount%100;
    cout<<"Number of fifty rupee note: "<<amount/50<<endl;
    amount=amount%50;
    cout<<"Number of twenty rupee note: "<<amount/20<<endl;
    amount=amount%20;
    cout<<"Number of one rupee note: "<<amount;

    return 0;
}