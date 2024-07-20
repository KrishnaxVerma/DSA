#include <iostream>
#include <stack>
using namespace std;

int Mincost(string s){

    //odd condition
    if(s.length()%2==1){
        return -1;
    }

    stack<char> st;

    for(int i=0;i<s.length();i++){

        char ch=s[i];

        if(ch=='{'){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }

    //stack contain invalid expression
       int a=0,b=0;
       while(!st.empty()){
           if(st.top()=='{'){
               b++;
           }
           else{
               a++;
           }
           st.pop();
       }
       int ans= (a+1)/2 + (b+1)/2;

       return ans;
}

int main(){
    
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;

    cout<<"Minimum cost to make string valid: "<<Mincost(s)<<endl;

    return 0;
}