class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int, int> freq;
        for(int n:nums)
        {
            freq[n]++;
        }
        int max=0;
        for(auto ele:freq)
        {
            if(ele.second>max)
            {
                max = ele.second;
            }
        }
        int count=0;
        for(auto ele:freq)
        {
            if(ele.second==max)
            {
                count += max;
            }
        }
        return count;
        
    }
};