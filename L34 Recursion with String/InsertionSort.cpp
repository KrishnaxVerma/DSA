//Insertion sort using recursion
#include <iostream>
using namespace std;

void sort(int *arr,int x,int size){
    if(x>size-1 || size<=1){
        return ;
    }

    int temp=arr[x];
    int i=x-1;
    while(i>=0){

        if(arr[i]>temp){
            arr[i+1]=arr[i];
        }
        else{
            break;
        }
        i--;
    }
    arr[i+1]=temp;

    sort(arr,x+1,size);

}
int main(){
    int arr[10]={99,66,33,11,55,88,6,4,3,21};
    int size=10;
    
    sort(arr,1,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}