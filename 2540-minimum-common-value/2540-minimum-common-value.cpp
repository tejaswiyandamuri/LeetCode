class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        unordered_map<int,int> freq;
        for(auto n1:nums1){
            freq[n1]++;
        }
        for(auto n2:nums2){
            if(freq[n2]>=1)
                return n2;
        }
        return -1;
    }
};