class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int i=0,j=0;
        while(i<n1&&j<n2){
            if(nums1[i]==nums2[j])
                return nums2[j];
            while(j<n2&&nums2[j]<=nums1[i]){
                if(nums1[i]==nums2[j])
                return nums2[j];
                j++;
            }
            i++;
        }
        return -1;
    }
};