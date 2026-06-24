class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int> f;
        int res=0;
        for(auto x:time){
            int rem=(60-x%60)%60;
            res+=f[rem];
            f[x%60]++;
        }
        return res;
    }
};