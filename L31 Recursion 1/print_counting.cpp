#include <iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print(n-1);
}
void print2(int n){
    if(n==0){
        return;
    }
    print2(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
    cout<<endl;
    print2(n);
    return 0;
}