class Solution {
public:
    string largestGoodInteger(string num) {
        char max=' ';
        int count=1;
        for(int i=1;i<num.size();i++) 
        {
            if(num[i]==num[i-1]) 
            {
                count++;
                if(count==3) 
                {
                    if(max==' ' || num[i]>max) 
                    {
                        max=num[i];
                    }
                }
            } 
            else 
            {
                count=1;
            }
        }
        if(max==' ') 
        {
            return "";
        }
        return string(3,max);
    }
};