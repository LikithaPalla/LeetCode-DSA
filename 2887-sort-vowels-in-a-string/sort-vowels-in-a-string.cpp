class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;
        vector<int> position;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                vowels.push_back(s[i]);
                position.push_back(i);
            }
        }
        sort(vowels.begin(),vowels.end());
        string answer=s;
        for(int i=0;i<position.size();i++)
        {
            answer[position[i]]=vowels[i];
        }
        return answer;
    }
};