class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       double median=0;
       for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
       } 
       int n=nums1.size();
       sort(nums1.begin(),nums1.end());
       if(n%2==0){
            double x=(nums1[n/2-1]+nums1[n/2]);
            median =x/2;
       }
       else{
            median=nums1[n/2]; 
       }
       return median;
    }
};