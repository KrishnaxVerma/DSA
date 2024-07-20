#include <iostream>
using namespace std;

class Nstack{

    public:
    int* arr;
    int* top;
    int* next;

    int n,s;
    //s is size of array & n is number of stack
    int freespot;


    public:
    //initialize data structure
    Nstack(int N, int S){
        n=N;
        s=S;
        arr= new int[s];
        top= new int[n];
        next= new int[s];

        //top initialize
        for(int i=0;i<n;i++){
            top[i]=-1;
        }

        //next initialize
        for(int i=0;i<s;i++){
            next[i]=i+1;
        }
        //update last index value to -1
        next[s-1]=-1;

        //initialize freespot
        freespot=0;
    }

    //x is value & m is mth stack
    bool push(int x, int m){

        //check for overflow
        if(freespot == -1){
            return false;
        }

        //find index
        int index= freespot;

        //update freespot
        freespot= next[index];

        //insert element into array
        arr[index]= x;

        //update next
        next[index]= top[m-1];

        //update top
        top[m-1]= index;

        return true;
    }

    bool pop(int m){

        //check for underflow
        if(top[m-1] == -1){
            return false;
        }

        //just reverse the code of push function
        int index= top[m-1];
        top[m-1]=next[index];
        next[index]= freespot;
        freespot= index;

        return arr[index];
    }
};


//TC O(1) SC O(n+s)
int main(){
    
    return 0;
}