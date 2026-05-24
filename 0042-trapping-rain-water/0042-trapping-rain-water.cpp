class Solution {
public:
    int trap(vector<int>& height) {
        int res=0,l=0,r=height.size()-1,leftmax=INT_MIN,rightmax=INT_MIN;
        while(l<=r){
            leftmax=max(leftmax,height[l]);
            rightmax=max(rightmax,height[r]);
            if(leftmax<=rightmax){
                res+=(leftmax-height[l++]);
            }
            else
                res+=(rightmax-height[r--]);
        }
        return res;
    }
};