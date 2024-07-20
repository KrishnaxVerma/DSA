#include <iostream>
#include <string>
using namespace std;

int main(){
    char s[20]={'K','r','i','s','h','\0','n','a','\0'};
    cout<<s<<endl;//Treats \0 as terminator
    string a={'K','r','i','s','h','\0','n','a','\0'};
    cout<<a;//Treats \0 as an element
    return 0;
}

/*



1. Null termination:
Character Array (char[])
Requires explicit null termination ('\0') to mark the end of a string.
Manipulation and handling might need manual management of null terminators.
String (std::string)
Automatically handles null termination; no explicit null terminator required.
Resizes dynamically to accommodate varying string lengths.

2. Size flexibility:
Character Array (char[])
Fixed-size; altering the size requires redefining the array.
String (std::string)
Dynamic resizing based on the content.
Provides methods like resize() and append() for altering size or concatenation.

3. Operations and functions:
Character Array (char[])
Limited built-in functions; often requires manual string manipulation.
C-style functions like strcpy(), strcmp(), etc., work directly with character arrays.
String (std::string)
Provides a wide range of member functions for string manipulation (length(), find(), substr(), etc.).
Overloaded operators for concatenation (+), comparison (==, !=), and more.

4. Memory management:
Character Array (char[])
Requires manual memory allocation and deallocation.
String (std::string)
Handles memory allocation/deallocation automatically.

5. Compatibility:
Character Array (char[])
Compatible with C-style strings and functions.
String (std::string)
Part of the C++ standard library, providing a more convenient and safer alternative to C-style strings.

*/