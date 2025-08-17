class Solution {
public:
    string customSortString(string order, string s) {
        string result="";
        for(int i=0;i<order.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(order[i]==s[j])
                {
                    result += s[j];
                }
            }
        }
        for(int j=0;j<s.length();j++)
        {
            if(order.find(s[j])==string::npos)
            {
                result += s[j];
            }
        }
        return result;
    }
};