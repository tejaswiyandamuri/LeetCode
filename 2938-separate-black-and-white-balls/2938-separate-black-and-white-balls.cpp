class Solution {
public:
    long long minimumSteps(string s) {
        long long res=0;
        int zeroes=0;
        for(auto x:s){
            if(x=='0')
                zeroes++;
        }
        for(auto ch:s){
            if(ch=='1')
                res+=zeroes;
            else
                zeroes--;
        }
        return res;
    }
};