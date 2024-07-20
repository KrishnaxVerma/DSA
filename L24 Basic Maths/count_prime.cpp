#include <iostream>
using namespace std;

bool prime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){//time complexity is O(n^2)
    int n;
    cout<<"Enter numbers: ";
    cin>>n;
    int count=0;
    for(int i=n-1;i>=2;i--){
        if(prime(i)){
        count++;
        }
    }
    cout<<"Number of prime number less than "<<n<<" is: "<<count;
    
    return 0;
}