class Solution {
public:
    int maxFreqSum(string s) {
        int maxvowel=0;
        int maxconsonent=0;
        for(char ch1:s)
        {
            int vowelcount=0;
            int consonentcount=0;
            for(char ch2:s)
            {
                if(ch1==ch2)
                {
                     if(ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u')
                    {
                        vowelcount++;
                    }
                    else if(isalpha(ch2))
                    {
                        consonentcount++;
                    }
                }
            }
            if(vowelcount>maxvowel)
            {
                maxvowel=vowelcount;
            }
            if(consonentcount>maxconsonent)
            {
                maxconsonent=consonentcount;
            }
        }
        return maxvowel+maxconsonent;
        
    }
};