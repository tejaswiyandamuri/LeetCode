class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long h = 0;
        int l = 0, k = 0;
        for (auto x : weights){
            l=max(l,x);
            h += x;
        }
        while(l<=h){
            long long mid=l+(h-l)/2;
            k=1;
            long long sum=0;
            for(int i=0;i<weights.size();i++){
                if(sum+weights[i]<=mid)
                    sum+=weights[i];
                else{
                    k++;
                    sum=weights[i];
                }
            }
            if(k<=days){
                h=mid-1;
            }else
                l=mid+1;

        }
        return l;
    }
};