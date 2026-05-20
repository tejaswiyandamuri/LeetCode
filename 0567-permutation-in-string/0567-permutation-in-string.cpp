class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l = 0, matched = 0;
        unordered_map<char, int> freq, s2mp;
        for (auto ch : s1)
            freq[ch]++;
        int uniques = freq.size();
        for (int i = 0; i < s2.size(); i++) {
            if (freq[s2[i]] == s2mp[s2[i]])
                matched--;
            s2mp[s2[i]]++;
            if (freq[s2[i]] == s2mp[s2[i]])
                matched++;
            if (i > s1.size() - 1) {
                if (freq[s2[l]] == s2mp[s2[l]])
                    matched--;
                s2mp[s2[l]]--;
                if (freq[s2[l]] == s2mp[s2[l]])
                    matched++;
                l++;
            }
            if (matched == uniques)
                return true;
        }
        return false;
    }
};