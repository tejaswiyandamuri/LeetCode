class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),tfreq=n/2;
        map<int,int> freq;
        for(auto i:nums){
            freq[i]++;
            if(freq[i]>tfreq){
                return i;
            }
        }
        return 0;
    }
};