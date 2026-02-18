class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> lives(101,0);
        for(int i=0;i<logs.size();i++)
        {
            int birth = logs[i][0]-1950;
            int death = logs[i][1]-1950;
            lives[birth]++;
            lives[death]--;
        }
        for(int i=1;i<lives.size();i++)
        {
            lives[i] = lives[i-1]+lives[i];
        }
        int year=0;
        int max=0;
        for(int i=0;i<lives.size();i++)
        {
            if(lives[i]>max)
            {
                max = lives[i];
                year = i;
            }
        }
        return year+1950;
    }
};