class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end() ,[](int a, int b) {
            int A = __builtin_popcount(a);
            int B = __builtin_popcount(b);
            if (A==B) 
            {
                return a<b;
            }
            return A<B;
        });
        return arr;
    }
};