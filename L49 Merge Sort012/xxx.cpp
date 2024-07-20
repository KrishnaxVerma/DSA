#include <iostream>
using namespace std;

bool palindrome(string str,int x,int y){


    for(int i=x;i<=y;i++){
        if(str[i]!=str[y-i+x]){
            return false;
        }
    }
    return true;
}

void updateSubstring(string &ans, string s, int x, int y) {
    if (y - x + 1 > ans.length()) {
        ans = s.substr(x, y - x + 1);
    }
}
string pal(string s){

    if(s.length()<=1){
        return s;
    }

    string input;
    string ans;
    int ws=2;

    while(ws<=s.length()){
        int i=0;
        int j=i+ws-1;

        for(;j<s.length();i++,j++){

            if(palindrome(s,i,j)){
                updateSubstring(ans,s,i,j);
                // cout<<ans<<endl;
            }

        }

        ws++;
    }

    return ans;
}

int main(){
    string s= pal("sddssd");
    cout<<s;
    return 0;
}