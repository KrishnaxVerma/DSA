#include <iostream>
using namespace std;
//unique element
int unique(int arr[],int size){
    int result=0;
    for(int i=0;i<size;i++){
        result=result^arr[i];
    }
    return result;
}
/*logic-
result=1^1^2^2^3^3^4^4^5;
XOR operator cancel out all same elements;
*/
int main(){
    int arr[11]={1,1,2,2,3,3,4,5,5};
    int ans=unique(arr,11);
    cout<<"Unique element is: "<<ans;
    return 0;
}