class Solution {
public:

    bool isEqual(vector<vector<int>>& mat, vector<vector<int>>& target)
    {
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j] != target[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }
    vector<vector<int>> rotate(vector<vector<int>>& mat)
    {
        int n=mat.size();
        vector<vector<int>> output(n, vector<int>(n));
        int col = n-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                output[j][col] = mat[i][j];
            }
            col--;
        }
        return output;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++)
        {
            if(isEqual(mat, target))
            {
                return true;
            }
            mat = rotate(mat);
        }
        return false;
    }
};