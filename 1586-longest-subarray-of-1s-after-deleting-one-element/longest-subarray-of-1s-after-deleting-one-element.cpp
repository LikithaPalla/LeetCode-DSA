class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start=0;
        int end=0;
        int result=INT_MIN;
        int count_zero=0;
        while(end<nums.size())
        {
            if(nums[end]==0)
            {
                count_zero++;
            }
            while(count_zero>1)
            {
                if(nums[start]==0)
                {
                    count_zero--;
                }
                start++;
            }
            result=max(result,end-start);
            end++;
        }
        return result;
    }
};