#include <iostream>
using namespace std;

bool ispower(int n){
    if(n<=0){
        return false;
   }
   return (n&(n-1))==0;
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    
    if(ispower(n)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}