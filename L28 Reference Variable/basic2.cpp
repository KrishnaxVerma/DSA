#include <iostream>
using namespace std;

//return reference 
int &func(int a){
    int num=a;
    int &ans=num;
    return ans;
}
//this is a bad practice as num will be erase after the
//function so ans will be destroyed as well
//hence there will be nothing to be return 

// same thing will happen with returning pointer
int* fun(int a){//this will alse generate warning
    int *ptr=&a;
    return ptr;
}
int main(){
    int n=1;
    cout<<func(n);
    return 0;
}