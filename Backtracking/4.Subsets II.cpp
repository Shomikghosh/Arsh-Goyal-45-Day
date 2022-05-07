class Solution {
public:
      void help(vector<vector<int>> &ret, vector<int> &temp, vector<int> &nums, int index, int n)
        {
            ret.push_back(temp);
            if(index == n)
            {
                return;
            }
            for(int i=index;i<n;i++)
            {
                if(i > index && nums[i] == nums[i-1])
                    continue;
                temp.push_back(nums[i]);
                help(ret, temp, nums, i+1, n);
                temp.pop_back();
            }
            return;
        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        help(ans,temp,nums,0,nums.size());
        return ans;
    }
};