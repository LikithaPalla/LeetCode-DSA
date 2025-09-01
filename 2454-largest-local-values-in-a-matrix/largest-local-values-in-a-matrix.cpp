class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n1=grid.size();
        int n2=n1-2;
        vector<vector<int>> result(n2, vector<int>(n2));
        for(int i=1;i<n1-1;i++)
        {
            for(int j=1;j<n1-1;j++)
            {
                int large=0;
                for(int a=i-1;a<i+2;a++)
                {
                    for(int b=j-1;b<j+2;b++)
                    {
                        large=max(grid[a][b],large);
                    }
                }
                result[i-1][j-1]=large;
            }
        }
        return result;
    }
};