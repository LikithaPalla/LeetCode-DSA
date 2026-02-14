class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest=0;
        int current=0;
        for(int n:gain)
        {
            current += n;
            highest = max(highest, current);
        }
        return highest;
    }
};