#include <iostream>
#include <stack>
using namespace std;

bool isRedundant(string s){

    stack<char> st;
    
    for(int i=0;i<s.length();i++){

        char ch=s[i];

        //ch ( or koi operator hoto push krdo
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else{

            //ch is ) or lowercase letter
            if(ch==')'){

                bool isRedundant=true;

                while(st.top()!='('){
                    char top= st.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        isRedundant=false;
                    }
                    st.pop();
                }

                if(isRedundant==true){
                    return true;
                }
                st.pop();
            }
        }
    }

    return false;
}

//TC SC O(n)
int main(){
    
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;

    if(isRedundant(s)){
        cout<<"String is redundant"<<endl;
    }
    else{
        cout<<"String is not Redundant"<<endl;
    }
    return 0;
}