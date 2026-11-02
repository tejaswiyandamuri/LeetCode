class Solution {
public:
    string reverseStr(string s, int k) {
        string res="";
        int n=s.length();
        for(int i=0;i<s.size();i++){
            string cur="";
            int j;
            for( j=i;j<i+k&&j<n;j++)
                cur+=s[j];
            reverse(cur.begin(),cur.end());
            res+=cur;
            while(j<i+k+k&&j<n)
            res+=s[j++];
            i=j-1;
        }
        return res;
    }
};