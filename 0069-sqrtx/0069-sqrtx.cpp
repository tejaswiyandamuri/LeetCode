class Solution {
public:
    int mySqrt(int x) {
        long long r=x,l=1,mid=0;
        while(l<=r){
            mid=l+(r-l)/2;
            if(mid*mid>x)
                r=mid-1;
            else if(mid*mid<x)
                l=mid+1;
            else
                return mid;
        }
        return r;
    }
};