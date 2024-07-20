#include <iostream>
using namespace std;
//Given AP: 3n+7

int ap(int n){
return 3*n+7;
}
int main(){
    int n;
     cout<<"Enter the value of n: ";
     cin>>n;
     cout<<"3*"<<n<<"+7="<<ap(n);
    return 0;
}