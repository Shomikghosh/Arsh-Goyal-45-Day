class Solution {
public:
    bool isPali(string s,int start,int end)
    {
         while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
    void help(string s,vector<vector<string>> &ans,vector<string> &temp,int index,int n){
        if(index==n)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<n;i++){
            if(isPali(s,index,i))
            {
                temp.push_back(s.substr(index,i-index+1));
                help(s,ans,temp,i+1,n);
                temp.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<string> temp;
        vector<vector<string>> ans;
        help(s,ans,temp,0,n);
        return ans;
    }
};