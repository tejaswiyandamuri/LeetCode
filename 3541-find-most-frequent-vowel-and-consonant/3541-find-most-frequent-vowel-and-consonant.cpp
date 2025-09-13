class Solution {
public:
    bool isvowel(char ch) {
        return ((ch == 'a' || ch == 'e') || (ch == 'i' || ch == 'o')) ||
               (ch == 'u');
    }
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;
        int max_v = 0, max_c = 0;
        for (auto ch : s) {
            freq[ch]++;
            if (isvowel(ch)) 
                max_v = max(max_v,freq[ch]);
            else
                max_c = max(max_c,freq[ch]);
        }
        return max_c + max_v;
    }
};