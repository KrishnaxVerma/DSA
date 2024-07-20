#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int x,int y,int n,vector<vector<int>> &visited,
            vector<vector<int>> &m){

    if((x>=0 && x<n) && (y>=0 && y<n) && m[x][y]==1 && visited[x][y]==0 ){
        return true;
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>> &m ,int n, vector<string> &ans,
 int x, int y, vector<vector<int>> &visited, string path){

    if(m[0][0]==0){
        return ;
    }
    //you have reached x,y here

    //base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return ;
    }

    visited[x][y]=1;

    //4 choices - U,D,R,L

    //down
    int newx=x+1;
    int newy=y;

    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('D');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //up
    newx=x-1;
    newy=y;

    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('U');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //right
    newx=x;
    newy=y+1;

    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('R');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //left
    newx=x;
    newy=y-1;

    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('L');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    visited[x][y]=0;//backtracking
}

void findPath(vector<vector<int>> &m, vector<string> &ans,int n){

    int srcx=0;
    int srcy=0;
    vector<vector<int>> visited =m;
    //initialise it to 0
    for(int i=0;i<visited.size();i++){
        for(int j=0;j<visited[i].size();j++){
            visited[i][j]=0;
        }
    }

    string path="";

    solve(m,n,ans,srcx,srcy,visited,path);
    sort(ans.begin(),ans.end());

}

int main(){
    vector<vector<int>> m={{1,0,0,0},
                           {1,1,0,1},
                           {1,1,0,0},
                           {0,1,1,1}};

    vector<string> ans;

    findPath(m,ans,4);

    //print ans
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}