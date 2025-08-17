class Solution {
public:
    int minBitFlips(int start, int goal) {
        int result=0;
        int x = start^goal;
        while(x!=0)
        {
            result += x&1;
            x >>= 1;
        }
        return result;
    }
};