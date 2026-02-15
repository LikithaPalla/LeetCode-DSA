class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> original(pref.size());
        original[0]=pref[0];
        for(int i=1;i<pref.size();i++)
        {
            original[i]= pref[i] ^ pref[i-1];
        }
        return original;
    }
};