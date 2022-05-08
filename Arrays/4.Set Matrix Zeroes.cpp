class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<int> roww(matrix.size(),1);
        vector<int> coll(matrix[0].size(),1);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    roww[i]=0 ;
                    coll[j]=0;
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(roww[i]==0||coll[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};