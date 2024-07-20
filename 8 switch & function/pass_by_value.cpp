#include <iostream>
using namespace std;
void dummy(int n){
    n++;
    cout<<"Value of n is: "<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    dummy(n);
    cout<<"Value of n is: "<<n<<endl;
    return 0;
}