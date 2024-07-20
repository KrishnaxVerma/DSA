/*
1. void pointers cannot be dereferenced. It can, however, be done using
 typecasting the void pointer.

2. Pointer arithmetic is not possible on pointers of void due to lack
 of concrete value and size.
*/

#include <iostream>
using namespace std;
int main() {
    void * ptr;
    int i = 10;
    // assign int address to void
    ptr = & i;
    cout << "Address of variable i " << & i << endl;
    cout << "Address where the void pointer is pointing " << ptr <<  endl;
   
}