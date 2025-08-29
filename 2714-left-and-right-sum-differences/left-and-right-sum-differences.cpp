class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> result;
        int Lsum=0;
        for(int i=0;i<nums.size();i++)
        {
            leftsum.push_back(Lsum);
            Lsum += nums[i];
        }
        int Rsum=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            rightsum.push_back(Rsum);
            Rsum += nums[i];
        }
        reverse(rightsum.begin(),rightsum.end());
        for(int i=0;i<nums.size();i++)
        {
            result.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return result;
    }
};