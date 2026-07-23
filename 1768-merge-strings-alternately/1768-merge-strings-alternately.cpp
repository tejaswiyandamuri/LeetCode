class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l=0,r=0;
        string res="";
        int n1=word1.size(),n2=word2.size(),i=0;
        for( i=0;i<n1&&i<n2;i++){
            res+=word1[i];
            res+=word2[i];
        }
        for(int j=i;j<n1;j++)
            res+=word1[j];
        for(int j=i;j<n2;j++)
            res+=word2[j];
        return res;
    }
};