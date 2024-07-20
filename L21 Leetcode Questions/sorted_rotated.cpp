//check whether an array is sorted and rotated or not
#include <iostream>
#include<vector>
using namespace std;

int check(vector<int> a){
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>a[(i+1)%a.size()]){
            count++;
        }
    }
    if(count<=1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector<int> a={1,9,8,4,5,6};
    int result=check(a);
    if(result){
        cout<<"Array is rotated and sorted";
    }
    else{
        cout<<"Array is not sorted and rotated";
    }
    return 0;
}