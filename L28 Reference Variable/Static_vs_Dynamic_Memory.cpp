/*
The memory created in stack is called static memory 
The memory created during runtime is stored in heap and this memory is
called dynamic memory

To access this memory we have to use "new" keyword
we cannot guve name to the memory block of heap bcoz it return
address so we use pointer


*/
//for 32bit size of pointer =4
//for 64bit size of pointer =8

/*
difference between static and dynamic

STATIC                  DYNAMIC
int arr[50];            int 8arr=new int[50]
size=4*50               size = 50*4+ sizeof(pointer)
    =200bytes                = 204bytes
(from stack)                from heap(200)and stack(4)

memory is automatically     we have to manual free the memory
released after using        using delete keyword
                            ex-
                            delete i;
                            delete []arr;

*/
#include <iostream>
using namespace std;

int main(){
    char ch='q';
    cout<<sizeof(ch)<<endl;//size of char
    
    char *c=&ch;
    cout<<sizeof(c)<<endl;//size of pointer

    char *ptr=new char;
    cout<<sizeof(ptr)<<endl;//total memory= 4(from pointer)+1(size of char)
    return 0;
}