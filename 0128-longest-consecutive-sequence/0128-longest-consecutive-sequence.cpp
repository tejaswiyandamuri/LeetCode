class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> f(nums.begin(),nums.end());
        int res=0;
        for(auto n:f){
            if(f.find(n-1)==f.end()){
                int len=1;
                int num=n;
                while(f.find(num+1)!=f.end()){
                    num++;
                    len++;
                }
                res=max(res,len);
            }
        }
        return res;
    }
};