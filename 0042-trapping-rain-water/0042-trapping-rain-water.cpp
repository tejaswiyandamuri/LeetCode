class Solution {
public:
    int trap(vector<int>& height) {
        int res=0,n=height.size(),leftmax=0;
        vector<int> nxt(n,0);
        nxt[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
            nxt[i]=max(nxt[i+1],height[i]);
        for(int i=0;i<height.size();i++){
            leftmax=max(leftmax,height[i]);
            res+=(min(nxt[i],leftmax)-height[i]);
        }
        return res;
    }
};