/*
The nth Catalan number can be expressed directly in terms of the central binomial coefficients by

= 1/(n+1)* 2nCn, where n=0,1,2,3,...
=(2n)!/((n+1)!(n)!)
1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, ...

property:
Cn= summation i=0 to n-1 Ci*Cn-i-1
*/

#include <iostream>
using namespace std;

int catalan(int n){

if(n<=1){
    return 1;
}
int res=0;
for(int i=0;i<n;i++){
res=res+catalan(i)*catalan(n-i-1);
}
return res;
}

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    cout<<"The nth term of the series: "<<catalan(n-1);
    return 0;
}