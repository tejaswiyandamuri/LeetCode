class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r=0,l=1,i=0;
        for(auto x:piles)
            r=max(x,r);
        while(l<=r){
            //i=mid
            i=l+(r-l)/2;
            int k=0;
            for(int j=0;j<piles.size();j++){
                k+=(piles[j]+i-1)/i;
                if(k>h)
                    break;
            }
            if(k<=h)
                r=i-1;
            else
                l=i+1;
        }
        return l;
    }
};