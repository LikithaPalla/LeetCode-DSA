class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest=nums[0]+nums[nums.size()-1];
        for(int i=0;i<nums.size();i++)
        {
            largest = max(largest, nums[i]+nums[nums.size()-i-1]);
        }
        return largest;
    }
};