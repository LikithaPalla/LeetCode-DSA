class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long result=0;
        int current=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                current++;
            }
            else
            {
                result +=1ll*current*(current+1)/2;
                current=0;
            }
        }
        result += 1ll*current*(current+1)/2;
        return result;
    }
};