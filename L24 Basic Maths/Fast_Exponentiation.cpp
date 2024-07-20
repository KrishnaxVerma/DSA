#include <iostream>
using namespace std;

int power(int n,int m){//time complexity is O(log(n))
    if(m==0){
        return 1;
    }
    else if(m&1){//odd
    return n*power(n,m/2)*power(n,m/2);
    }
    else{//even
        return power(n,m/2)*power(n,m/2);
    }
}
int main(){
    int n,m;
    cout<<"Enter numbers: "<<endl;
    cin>>n>>m;
    cout<<power(n,m);
    return 0;
}