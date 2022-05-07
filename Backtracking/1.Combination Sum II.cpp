class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& candidates,int ii, int target,vector<int> &temp){
        
        if(!target)
        {
            ans.push_back(temp);
            return;
        }
        int i=ii;
        while(i<candidates.size()&&target-candidates[i]>=0)
        {
                if (i == ii || candidates[i] != candidates[i-1]) {
                temp.push_back(candidates[i]);
                helper(candidates,i+1,target-candidates[i],temp);
                temp.pop_back();
                }
            i++;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        helper(candidates,0,target,temp);
        return ans;
    }
};