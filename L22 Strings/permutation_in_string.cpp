#include <iostream>
using namespace std;

bool check(int count1[],int count2[]){

    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i]){
            return 0;
        }
    }
    return 1;

}

bool checkperm(string s1,string s2){
    //character count arrary
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }

    //traverse s2 string in window size of s1 length and compare

    int i=0;
    int wsize=s1.length();
    int count2[26]={0};

    while(i<wsize && i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }

    if(check(count1,count2)){
        return 1;
    }

    //aage wali window ko process krna

    while(i<s2.length()){
        char newchar=s2[i];
        int index = newchar-'a';
        count2[index]++;

        char oldchar =s2[i-wsize];
        index=oldchar-'a';
        count2[index]--;
        i++;

        if(check(count1,count2)){
        return 1;
        }
    }
    return 0;
}
int main(){
    string s1,s2;
    cout<<"Enter a sub string: "<<endl;
    cin>>s1;
    cout<<"Enter a string: "<<endl;
    cin>>s2;
    

    cout<<checkperm(s1,s2);
    return 0;
}