class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int d : digits) freq[d]++;
        vector<int> result;
        for (int a = 1; a <= 9; a++) {   
            if (freq[a] == 0) continue;
            freq[a]--;
            
            for (int b = 0; b <= 9; b++) { 
                if (freq[b] == 0) continue;
                freq[b]--;
                
                for (int c = 0; c <= 9; c += 2) { 
                    if (freq[c] == 0) continue;
                    
                    int num = 100*a + 10*b + c;
                    result.push_back(num);
                }
                
                freq[b]++; 
            }
            
            freq[a]++; 
        }
        
        sort(result.begin(), result.end()); 
        return result;
    }
};