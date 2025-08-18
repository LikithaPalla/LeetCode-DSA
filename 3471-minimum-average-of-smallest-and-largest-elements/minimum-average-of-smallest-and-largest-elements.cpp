class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<double> result;
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            result.push_back((nums[left]+nums[right])/2.0);
            left++;
            right--;
        }
        return *min_element(result.begin(),result.end());
    }
};