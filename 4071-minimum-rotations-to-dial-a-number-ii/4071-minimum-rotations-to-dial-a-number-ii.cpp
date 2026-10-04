class Solution {
public:
    int minRotations(int n, string s) {
       int res=0,prev=0;
       vector<int> b(n);
        for(int i=n-1;i>=0;i--){
            int num=s[i]-'0';
            res+=min(abs(prev-num),abs(9-max(prev,num)+(min(num,prev)+1)));
            b[i]=res;
            prev=num;
        }
        res=0,prev=0;
        int ans=b[0];
        for(int i=0;i<n;i++){
            int num=s[i]-'0';
            res+=min(abs(prev-num),abs(9-max(prev,num)+(min(num,prev)+1)));
            int rev=res;
            if(i!=n-1)
                rev+=min(abs(s[i]-s[n-1]),abs(9-max(s[i],s[n-1])+(min(s[i],s[n-1])+1)))+b[i+1]-b[n-1];
            ans=min(ans,rev);
            prev=num;
        }
        return ans;
    }
};