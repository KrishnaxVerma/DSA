//Indexing of arr start from 0

#include <bits/stdc++.h> 

void heapify(vector<int>& arr, int n, int i){
    
    int smallest= i;
    //for 0 based indexing
    int left= 2*i+1;
    int right= 2*i+2;

    if(left < n && arr[smallest] > arr[left]){
        smallest= left;
    }
    if(right < n && arr[smallest] > arr[right]){
        smallest= right;
    }

    if(smallest!=i){
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int s= arr.size();
    for(int i=s/2-1;i>=0;i--){
        heapify(arr, s, i);
    }

    return arr;
}