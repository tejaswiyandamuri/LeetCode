class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=m-1,r=n-1,x=nums1.size()-1;
        while(l>=0&&r>=0){
            if(nums1[l]>nums2[r]){
                nums1[x]=nums1[l--];
            }
            else{
                nums1[x]=nums2[r--];
            }
            x--;
        }
        while(r>=0&&x>=0)
            nums1[x--]=nums2[r--];
    }
};