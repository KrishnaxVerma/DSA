#include <iostream>
#include <stack>
using namespace std;
//TC SC O(n)
bool matches(char top, char ch){

    if(ch==')' && top=='(' || ch==']' && top=='[' || ch=='}' && top=='{'){
        return true;
    }
    else{
        return false;
    }
}
bool isValid(string expression){

    stack<char> s;
    for(int i=0;i<expression.length();i++){

        char ch= expression[i];

        //if opening bracket push
        //if closing bracket pop

        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            //for closing bracket
            if(!s.empty()){
                char top=s.top();
                if(matches(top,ch)){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }

    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string s;
    cout<<"Enter an expression: "<<endl;
    cin>>s;

    if(isValid(s)){
        cout<<"Valid parenthesis"<<endl;
    }    
    else{
        cout<<"Not valid parenthesis"<<endl;
    }
    return 0;
}