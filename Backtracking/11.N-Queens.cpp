class Solution {
public:
     vector<vector<string>> result;
    bool issafe(vector<string>&board,int x,int y){
       int n=board.size();
       for(int row=0;row<x;row++){
            if(board[row][y]=='Q'){
                return false;
            }
       }

       int row=x-1,col=y-1;
       while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--; col--;
       }

        row=x-1;
        col=y+1;
       while(row>=0 && col<n){
            if(board[row][col]=='Q'){
                return false;
            }
            row--; col++;
       }
       return true;
    }


    void backtrack(int row , int n,vector<string>&curr) {
        if(row == n){
            result.push_back(curr);
            return;
        }
        
        for(int col=0;col<n;col++) {
            if(issafe(curr,row,col)) {
                curr[row][col] = 'Q';
                backtrack(row+1,n,curr);
                curr[row][col] = '.';
            }
        }
        
        return;
    }
     
    vector<vector<string>> solveNQueens(int n) {
        string s;
        for(int i=0;i<n;i++) 
            s.push_back('.');
        vector<string> curr(n,s);
        backtrack(0,n,curr);
        return result;
    }
};