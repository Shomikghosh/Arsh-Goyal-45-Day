class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map <int,int> mp;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]==1)
            {
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};