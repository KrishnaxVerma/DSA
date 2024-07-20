#include <iostream>
using namespace std;
//set bit means one bit
int setbit(int n){
    int count =0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Total number of set bit in a and b is: "<<setbit(a)+setbit(b);
    return 0;
}