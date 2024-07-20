#include <iostream>
#include <vector>
using namespace std;

int primecount(int n){
    vector<bool> prime(n+1,true);

    prime[0]=prime[1]=false;
    int count=0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;
            }
        }
    }
    return count++;
}
int main(){//time complexity is O(n* log(log(n)))
    int n;
    cout<<"Enter numbers: ";
    cin>>n;

    cout<<primecount(n);
    return 0;
}