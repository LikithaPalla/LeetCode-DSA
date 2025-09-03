class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> unique;
        for(auto &word : words)
        {
            string s;
            for(char c:word)
            {
                s += v[c-'a'];
            }
            unique.insert(s);
        }
        return unique.size();
    }
};