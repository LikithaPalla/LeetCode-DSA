class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum += mat[i][i];
            sum += mat[n-i-1][i];
            if(n%2==1 && i==n/2)
            {
                sum -= mat[i][i];
            }
        }
        return sum;
    }
};