#include <iostream>
#include<stack>
using namespace std;

//stack work on last in first out 

int main(){
    stack<string> s;

    s.push("Heyyy");
    s.push("Krishna");
    s.push("Verma");

    cout<<"Top element: "<<s.top()<<endl;
    s.pop();  
    cout<<"Top element: "<<s.top()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;
    return 0;
}