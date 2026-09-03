class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min2=INT_MAX;
        for(auto x:nums1){
            if(x%2!=0)
                min2=min(min2,x);
        }
        bool r1=true,r2=true;
        for(auto x:nums1){
            if(x%2==0)continue;
            else if(x-min2<1){
                cout<<x-min2;
                r1=false;
                break;
            }
        }
        for(auto x:nums1){
            if(x%2==1)continue;
            else if(x-min2<1){
                cout<<x-min2;
                r2=false;
                break;
            }
        }
        return r1||r2;
    }
};