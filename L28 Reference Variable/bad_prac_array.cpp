#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    return 0;
}
/*
we know that this is a bad practice but why??

the size of the array is decided during the runtime not during the compile time
whenever a program starts it comes up with memory in the form of stack and heap

therefore if you enter the size of array greater than the stack memory during the runtime 
the program will crash
BUT if you intialise arr[10000]
the stack memory will carry the memory for alloted size during the compile time
*/