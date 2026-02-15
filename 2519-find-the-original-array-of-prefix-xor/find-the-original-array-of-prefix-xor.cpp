class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> original(pref.size());
        original[0]=pref[0];
        int xor_op = original[0];
        for(int i=1;i<pref.size();i++)
        {
            original[i]=xor_op ^ pref[i];
            xor_op = xor_op ^ original[i];
        }
        return original;
    }
};