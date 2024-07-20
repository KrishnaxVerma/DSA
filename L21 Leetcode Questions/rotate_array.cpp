#include <iostream>
#include<vector>
using namespace std;

void show(vector<int> a){
    for(int i=0;i<a.size();i++){
    printf("%d ",a[i]);
    }
}
vector<int> rotate(vector<int> a,int k){\
    vector<int> temp(a.size());
    for(int i=0;i<a.size();i++){
        temp[(i+k)%a.size()]=a[i];
    }
    a=temp;
    return a;
}
int main(){
    vector<int> a={1,2,3,4,5,6,7};
    int size=a.size();

    int k=3;

    a=rotate(a,k);
    show(a);
    return 0;
}