#include <iostream>
using namespace std;

int firstbybinary(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastbybinary(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int count(int arr[],int size,int key){
    int ans;
    if(firstbybinary(arr,size,key)<0){
        return 0;
    }
    else{
        ans=lastbybinary(arr,size,key)-firstbybinary(arr,size,key)+1;
        return ans;
    }   
}
int main(){
    int arr[]={1,1,1,2,2,3,4,5,6,7,7,7,7,7,7,8,8,8,9,9,9};
    int size=sizeof(arr)/sizeof(int);
    int key=7;
    cout<<"Number of occurence of "<<key<<" in array is: "<<count(arr,size,key);
    return 0;
}