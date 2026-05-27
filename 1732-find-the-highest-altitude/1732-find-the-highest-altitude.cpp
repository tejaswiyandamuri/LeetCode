class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0,net_altitude=0;
        for(auto x:gain){
            net_altitude+=x;
            res=max(res,net_altitude);
        }
        return res;
    }
};