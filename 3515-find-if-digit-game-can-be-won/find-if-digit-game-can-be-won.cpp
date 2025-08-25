class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int one_sum=0;
        int two_sum=0;
        for(int n:nums)
        {
            if(n<10)
            {
                one_sum += n;
            }
            else
            {
                two_sum += n;
            }
        }
        return one_sum != two_sum;
    }
};