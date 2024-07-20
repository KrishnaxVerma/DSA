#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[50];
    cout << "Enter your name: ";
    cin.getline(name, 50);//reads string with spaces
    cout << "Hello, " << name << "!"<<endl<<endl;

    string line;
    cout << "Please enter some text: ";
    getline(cin, line, '.');//reads multiple line untill it encounter .
    cout << "You entered: " << line << endl<<endl;

    char s1[]="a",s2[]="b";
    cout<<"lenght of "<<s1<<strlen(s1)<<endl;
    strcpy(s1,"Krishna");
    strcpy(s2,"Verma");
    cout<<strcmp(s1,s2)<<endl;//give 0 if equal

    //to update the size of string use: string_name.resize(length); 

    return 0;
}
