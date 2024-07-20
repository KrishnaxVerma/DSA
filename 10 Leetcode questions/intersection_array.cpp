#include <iostream>
#include<limits.h>
using namespace std;

void bettercode(int a[],int b[],int sa,int sb){
    int i=0,j=0;
    cout<<endl<<"Intersecting array is: "<<endl;
    while(i<sa && j<sb){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            i++;
        }
    }
}

void intersecting(int a[],int b[],int sa, int sb){
    cout<<endl<<"Intersecting array is: "<<endl;
    for(int i=0;i<sa;i++){
        for(int j=0;j<sb;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                b[j]=INT_MIN;
                break;
            }
        }
    }
}

int main(){
    int a[]={1,2,3,3,3,3,4,5,6,7};//array is sorted in ascendning order
    int b[]={1,1,2,3,4,5,9};
    int sa=sizeof(a)/sizeof(int);
    int sb=sizeof(b)/sizeof(int);
    bettercode(a,b,sa,sb);
    intersecting(a,b,sa,sb);
    
    return 0;
}