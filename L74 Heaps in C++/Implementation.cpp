#include <iostream>
using namespace std;

class heap{

    public:
    int arr[100];
    int size=0;

    heap(){
        arr[0]=-1;
        size=0;
    }

    // TC O(logn)
    void insert(int val){
        
        size++;
        int index= size;
        arr[index]= val;

        while(index > 1){
            int parent= index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index= parent;
            }
            else{
                return ;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    // TC O(logn)
    void deletefromHeap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return ;
        }

        // Put the last element into the first index
        arr[1]= arr[size];

        // remove last element
        size--;

        //take root to its correct position
        int i=1;
        while(i<size){
            int leftIndex= 2*i;
            int rightIndex= 2*i+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i= leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[leftIndex]);
                i= rightIndex;
            }
            else{
                return ;
            }
        }
    }
};

// TC O(logn)
// for max heap
void heapify(int arr[], int n, int i){

    int largest= i;
    int left= 2*i;
    int right= 2*i+1;

    if(left <= n && arr[largest] < arr[left]){
        largest= left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest= right;
    }

    if(largest!=i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

// TC O(nlogn)
void heapSort(int arr[], int n){
    
    int size= n;
    while(size>1){
        //swap 
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}

int main(){

    heap h;
    h.insert(50);
    h.insert(20);
    h.insert(40);
    h.insert(10);
    h.insert(30);

    h.print();

    h.deletefromHeap();

    h.print();

    // Heap Creation

    int arr[6]= {-1, 54, 53, 55, 52, 50};
    int n= 5;
    // TC is O(n) not O(nlogn)
    for(int i=n/2; i>0; i--){
        heapify(arr, n, i);
    }

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Heap Sort
    cout<<"Printing Sorted Array: "<<endl;
    heapSort(arr, n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}