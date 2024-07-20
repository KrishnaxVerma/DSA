#include <iostream>
#include<vector>
using namespace std;
void printvec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int N;//number of array in vector
    cout<<"Enter number of arrays: ";
    cin>>N;

    vector<int> v[N];

    for (int i = 0; i < N; i++)
    {
        int n;
        cout<<"Size of array: ";
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        printvec(v[i]);
    }
    cout<<"v[0][0]="<<v[0][0];
    return 0;
}