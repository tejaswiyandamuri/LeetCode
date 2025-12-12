class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res=INT_MIN,l=0,r=0,n=fruits.size();
        unordered_map<int,int> freq;
        while(r<n){
            freq[fruits[r]]++;
            while(freq.size()>2){
                freq[fruits[l]]--;
                if(freq[fruits[l]]<=0)
                    freq.erase(fruits[l]);
                l++;
            }
            res=max(res,r-l+1);
            r++;
        }
        return res;
    }
};