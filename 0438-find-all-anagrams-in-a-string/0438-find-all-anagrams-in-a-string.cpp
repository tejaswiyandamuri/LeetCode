class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> freq,window;
        vector<int> res;
        int l=0,matched=0,uniques=0;
        for(auto x:p)
            freq[x]++;
        uniques=freq.size();
        for(int i=0;i<s.size();i++){
            if(window[s[i]]==freq[s[i]])
                matched--;
            window[s[i]]++;
            if(window[s[i]]==freq[s[i]])
                matched++;
            if(i>p.size()-1){
                if(window[s[l]]==freq[s[l]])
                    matched--;
                window[s[l]]--;
                if(window[s[l]]==freq[s[l]])
                    matched++;
                l++;
            }
            if(matched==uniques)
                res.push_back(i-p.size()+1);
        }
        return res;
    }
};