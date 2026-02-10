class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int index=num.size()-1;
        vector<int> arr;
        while(index>=0 || k>0)
        {
            if(index>=0)
            {
                k+=num[index];
                index--;
            }
            arr.push_back(k%10);
            k/=10;
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};