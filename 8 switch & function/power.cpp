#include <iostream>
using namespace std;

int power(){
    int a,b;
    cout<<"Enter base and power: ";
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
    ans=ans*a;
    }
    return ans;
}
int main(){
    cout<<power()<<endl;
    cout<<power()<<endl;
    cout<<power()<<endl; 

     return 0;
}