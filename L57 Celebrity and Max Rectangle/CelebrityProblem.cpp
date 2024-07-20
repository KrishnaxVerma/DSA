#include <iostream>
#include <vector>
#include <stack>
using namespace std;


//TC SC O(n)
bool knows(vector<vector<int>> &M, int n, int a, int b){

    if(M[a][b]==1){
        return true;
    }
    else{
        return false;
    }
}

int celebrity(vector<vector<int>> &M, int n){

    stack<int> s;

    //push all the elements in the stack
    for(int i=0;i<n;i++){
        s.push(i);
    }

    //get two elements and compare them

    while(s.size()>1){

        int a=s.top();
        s.pop();

        int b=s.top();
        s.pop();

        if(knows(M,n,a,b)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }
        //single elmenent in stack is potential celebrity
        //so verify it
        int ans=s.top();

        int zerocount=0;

        for(int i=0;i<n;i++){
            if(M[ans][i]==0){
                zerocount++;
            }
        }
        //all zeroes
        if(zerocount!=n){
            return -1;
        }

        //column check
        int onecount=0;
        for(int i=0;i<n;i++){
            if(M[i][ans]==1){
                onecount++;
            }
        }
        //all one except diagonal
        if(onecount!=n-1){
            return -1;
        }

        return ans;
}

//TC O(n^2) SC O(1)
int celebrity2(vector<vector<int> >& M, int n) 
    {
        int ans = -1;

        for (int i = 0; i < n; i++) {
            ans = i;

            for (int j = 0; j < n; j++) {
                if (i != j && (M[i][j] == 1 || M[j][i] == 0)) {
                    ans = -1;
                    break;
                }
            }

            if (ans != -1) {
                break;
            }
        }

        return ans;
    }

int main(){
    
    vector<vector<int>> M={{0,1,0},{0,0,0},{0,1,0}};
    int n= M.size();

    int ans= celebrity(M,n);
    cout<<"Celebrity is : "<<ans<<endl;
    return 0;
}