class Solution {
public:
    void help(int curr,int n,int k,vector<int> &temp,vector<vector<int>> &ans)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=curr;i<=n;i++)
        {
            temp.push_back(i);
            help(i+1,n,k,temp,ans);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<vector<int>> ans;
        help(1,n,k,temp,ans);
        return ans;
    }
};