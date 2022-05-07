class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num0=0;
        int num1=0;
        int num2=nums.size()-1;
        while(num1<=num2)
        {
            if(nums[num1]==0)
            {
                swap(nums[num1],nums[num0]);
                num0++;
                num1++;
            }else if(nums[num1]==1)
            {
                num1++;
            }else{
                swap(nums[num1],nums[num2]);
                num2--;
            }
        }
    }
};