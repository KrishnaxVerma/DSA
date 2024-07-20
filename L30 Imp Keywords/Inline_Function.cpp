//Inline function are used to reduce the fucntion calls overhead

/*
when function contain one statement it can be converted in inline function
1-3 line it depends on the compiler
>3 lines compiler will not allow

inline function will go the place where it is called during compilation
it will reduce memory usage
function calls does not take place
*/

#include <iostream>
using namespace std;

int getmax(int a,int b){
    return (a>b)?a:b;
}
int main(){
    
    int a=1,b=2;
    int ans=0;

    ans=getmax(a,b);
    cout<<ans<<endl;

    a=a+3;
    b=b+1;
    ans=getmax(a,b);
    cout<<ans<<endl;
    return 0;
}
