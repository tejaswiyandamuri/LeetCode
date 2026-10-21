class Solution {
public:
    int minOperations(string s) {
        int mn=0,mx=0,n=s.length();
        char prev=s[0];
        bool isSorted=true;
        for(int i=0;i<n;i++){
            if(s[i]<s[mn])
                mn=i;
            if(s[i]>=s[mx])
                mx=i;
            if(s[i]<prev)
                isSorted=false;
            prev=s[i];
        }
        if(isSorted) return 0;
        if(n==2)return -1;
        if(mn==0||mx==n-1)return 1;
        if(mn==n-1&&mx==0)return 3;
        return 2;
        return 0;
    }
};