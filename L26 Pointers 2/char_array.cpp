#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";//one extra size o]for null character

    cout<<arr<<endl;//prints address
    cout<<ch<<endl;//prints entire content
    char *c=&ch[0];
    
    cout<<c<<endl;//prints entire string instead of address
    char temp='z';
    char *ptr=&temp;
    cout<<ptr<<endl;//prints untill it gets null character

    char chch[6]="abcde";
    //in above case a temporary memory is created to store content
    //this content is copied to memory of chch
    char *chc="abcdef";
    //this is risky and bad practice 
    //temp memory is cretaed to store the content
    //the address of first block is store in the pointer chc
    return 0;
}