unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> upperLeftDiagnolCheck;
    unordered_map<int,bool> bottomLeftDiagnolCheck;

    bool isSafe(vector<string> &board, int row, int col, int n) {

        if(rowCheck[row] == true )
            return false;
            
        if(upperLeftDiagnolCheck[n-1+col-row] == true)
            return false;
            
        if(bottomLeftDiagnolCheck[row+col] == true)
            return false;

        return true;


    }

    void solve(vector<vector<string>> &ans, vector<string> &board, int n, int col){

        // base case
        if(col==n){
            // answer store
            ans.push_back(board);
            //return
            return;
        }

        for(int row = 0 ; row<n; row++){
            if(isSafe(board,row, col,n)){
                // action
                board[row][col] = 'Q';

                rowCheck[row] = true;
                upperLeftDiagnolCheck[n-1+col-row] = true;
                bottomLeftDiagnolCheck[row+col] = true;

                // recursive 
                solve(ans,board, n, col+1);


                // back track
                board[row][col] = '.';
                rowCheck[row] = false;
                upperLeftDiagnolCheck[n-1+col-row] = false;
                bottomLeftDiagnolCheck[row+col] = false;
            }
        }
    }


   
    vector<vector<string>> solveNQueens(int n) {
        
        // board

        vector<string> board(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                board[i].push_back('.');
            }
        }


        vector<vector<string>> ans;
        int col = 0;

        solve(ans, board, n, col);
        return ans;


    }