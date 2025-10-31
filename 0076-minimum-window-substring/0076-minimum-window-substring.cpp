class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128,0);
        int l=0,cnt=0,minlen=INT_MAX;
        int si=-1;
        for(auto x:t)
            freq[x]++;
        for(int r=0;r<s.size();r++){
            if(freq[s[r]]>0)
                cnt++;
            freq[s[r]]--;
            while(cnt==t.size()){
                if(r-l+1<minlen){
                    minlen=min(minlen,r-l+1);
                    si=l;
                }
                freq[s[l]]++;
                if(freq[s[l]]>0){
                    cnt--;
                }
                l++;
            }
        }
        return si==-1?"":s.substr(si,minlen);
    }
};