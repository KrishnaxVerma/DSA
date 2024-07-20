#include <iostream>
using namespace std;

void printcounting(int n){
    for(int i=0;i<=n;i++)
    cout<<i<<endl;
    return ;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    printcounting(n);
    return 0;
}