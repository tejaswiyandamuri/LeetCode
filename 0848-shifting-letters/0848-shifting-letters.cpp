class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.size();
        vector<long long> shift_for_each(n,0);
        string res;
        shift_for_each[n-1]=shifts[n-1];
        for(int i=n-2;i>=0;i--)
            shift_for_each[i]=shift_for_each[i+1]+shifts[i];
        for(int i=0;i<n;i++){
            char x='a'+(s[i]-'a'+shift_for_each[i])%26;
            res+=x;
        }
        return res;
    }
};