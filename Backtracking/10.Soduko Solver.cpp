class Solution {
public:
    bool check(vector<vector<char>>& A,int a,int b,char k)
    {
        for(int i=0;i<9;i++)
            if(A[i][b]==k or A[a][i]==k)
                return 0;
            int rows,rowf,cols,colf;
            rows=a;
       rowf=a;
       rowf++;
       while(rows%3)
           rows--;
       cols=b;
       while(cols%3)
           cols--;
       while(rowf%3)
           rowf++;
       colf=b;
       colf++;
       while(colf%3)
           colf++;
       for (int i = rows; i < rowf; i++)
       {
           for (int j = cols; j < colf; j++)
           {
               if (A[i][j]==k)
                   return false;
           }
       }
       return true;
        
    }
    bool prob(vector<vector<char>>& A,int i,int j)
    {
        if(i==9)
            return 1;
        if(j==9)
            return prob(A,i+1,0);
        if(A[i][j]!='.')
            return prob(A,i,j+1);
        for(char k='1';k<='9';k++)
        {
            if(check(A,i,j,k))
            {
                A[i][j]=k;
                if(prob(A,i,j+1))
                    return 1;
                A[i][j]='.';
            }
        }
        return 0;
    }
    void solveSudoku(vector<vector<char>>& board) {
        if(prob(board,0,0))
            return;
    }
};