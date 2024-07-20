#include <bits/stdc++.h>

bool isSafe(int row, int col, vector<vector<int>>& sudoku, int num){
    for(int i=0;i<9;i++){
        if(sudoku[row][i]==num) return false;
    }

    for(int i=0;i<9;i++){
        if(sudoku[i][col]==num) return false;
    }

    int startrow= row- row%3;
    int startcol= col- col%3;
    for(int i=startrow;i<startrow+3;i++){
        for(int j=startcol;j<startcol+3;j++){
            if(sudoku[i][j]==num) return false;
        }
    }

    return true;
}

bool solve(int row, int col, vector<vector<int>>& sudoku){
    if(row==8 && col==9){
        return true;
    }

    if(col==9){
        col=0;
        row++;
    }

    if(sudoku[row][col]!=0){
        return solve(row, col+1, sudoku);
    }


    for(int i=1;i<10;i++){
        if(isSafe(row, col, sudoku, i)){
            sudoku[row][col]=i;
            
            if(solve(row, col, sudoku)){
                return true;
            }

            sudoku[row][col]=0;
        }
    }

    return false;
}

void solveSudoku(vector<vector<int>>& sudoku)
{
	// Write your code here
    // No need to print the final sudoku
    // Just fill the values in the given matrix
    bool ans= solve(0, 0, sudoku);
}