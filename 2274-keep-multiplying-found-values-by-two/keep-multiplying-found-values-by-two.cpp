class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int result=original;
        bool found=true;
        while(found)
        {
            found=false;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==result)
                {
                    result = nums[i]*2;
                    found=true;
                    break;
                }
            }
        }
        return result;
    }
};