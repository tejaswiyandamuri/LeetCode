class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n=security.size(),left=0;
        vector<int> res,right(n);
        right[n-1]=0;
        for(int i=n-2;i>=0;i--){
            if(security[i]<=security[i+1])
                right[i]=right[i+1]+1;
            else
                right[i]=0;
        }
        for(int i=0;i<n-1;i++){
            if(left>=time&&right[i]>=time)
                res.push_back(i);
            if(security[i]>=security[i+1])
                left++;
            else
                left=0;
        }
        if(left>=time&&right[n-1]>=time)
                res.push_back(n-1);
        return res;
    }
};