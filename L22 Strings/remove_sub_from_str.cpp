#include <iostream>
using namespace std;

void remove(string &s,string sub){
    while(s.length()!=0 && s.find(sub)<s.length()){
        s.erase(s.find(sub),sub.length());
    }
}
int main(){
    string s,sub;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    cout<<"Enter a sub string: "<<endl;
    cin>>sub;

    remove(s,sub);
    cout<<"After removing: "<<endl;
    cout<<s;
    return 0;
}