#include <iostream>
#include<queue>
using namespace std;

//queue work on first in first out

int main(){
    queue<string> q;

    q.push("Hey");
    q.push("Krishna");
    q.push("Verma");

    cout<<"size before pop: "<<q.size()<<endl;

    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;

    cout<<"size after pop: "<<q.size()<<endl;
    return 0;
}