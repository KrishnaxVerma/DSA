#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    long double bi=0,bit;
    cout<<"Enter a number: ";
    cin>>n;
    int i=0;
    while(n!=0)
    {
     bit=(n&1)?1:0;
       bi=bi+ bit*pow(10,i);
        n=n>>1;
        i++;
    }
cout<<"Binary: "<<bi;
    return 0;
}