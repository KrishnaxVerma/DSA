#include <iostream>
using namespace std;

int len(string name){
    int count=0;
    while(name[count]!='\0'){
        count++;
    }
    return count;
}

char maxocc(string s){
    int arr[26]={0};
    int l=len(s);
    for(int i=0;i<l;i++){
        int n;
        if(s[i]>='a'&& s[i]<='z'){
            n=s[i]-'a';
        }
        else{
            n=s[i]-'A';
        }
        arr[n]++;
    }

    int ind=0;
    for(int i=0;i<26;i++){
        if(arr[i]>arr[ind]){
            ind=i;
        }
    }
    return ('a'+ind);
}
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;

    cout<<"Maximum occuring character is : "<<maxocc(s);

    return 0;
}