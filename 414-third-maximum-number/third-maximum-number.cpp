class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int n:nums)
        {
            s.insert(n);
        }
        vector<int> arr(s.begin(),s.end());
        int length=arr.size();
        if(length<3)
        {
            return arr[length-1];
        }
        return arr[length-3];
    }
};