#include <bits/stdc++.h>

//TC O(9^m) SC(1)

bool isSafe(int row, int col, vector<vector<int>>& board, int num){
    for(int i=0; i<board[0].size(); i++){
        
        // Check row
        if(board[row][i] == num) return false;

        // Check col
        if(board[i][col] == num) return false;

        // Check 3x3 matrix
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == num) return false;
    }

    return true;
}

bool solve(vector<vector<int>>& board){
    
    int n= board[0].size();

    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){

            //cell is empty
            if(board[row][col]==0){
                for(int val= 1;val<=9;val++){
                    if(isSafe(row, col, board, val)){
                        board[row][col]=val;

                        //recursive call
                        bool nextSolPossible= solve(board);
                        if(nextSolPossible){
                            return true;
                        }
                        else{
                            board[row][col]=0;
                        }
                    }
                }

                return false;
            }
        }
    }

    return true;
}

void solveSudoku(vector<vector<int>>& sudoku)
{
	solve(sudoku);
}