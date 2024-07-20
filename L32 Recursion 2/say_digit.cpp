#include <iostream>
using namespace std;

void saydigit(int n,string arr[]){
    if(n==0){
        return ;
    }
    saydigit(n/10,arr);
    int d=n%10;
    cout<<arr[d]<<" ";
}
int main(){
    int n;
    string arr[]={"zero","one","two","three","four","five","six",
                    "seven","eight","nine"};
    cout<<"Enter a number : "<<endl;
    cin>>n;
    saydigit(n,arr);

    return 0;
}