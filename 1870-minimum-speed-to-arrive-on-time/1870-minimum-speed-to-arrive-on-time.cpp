class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l=1,h=10000000,res=-1;
        for(auto x:dist)
            h=max(x,h);
        while(l<=h){
            int mid=(l+h)/2;
            double total=0;
            for(int i=0;i<dist.size();i++){
                total=ceil(total);
                total+=(double)dist[i]/(double)mid;
            }
            if(total<=hour){
                res=mid;
                h=mid-1;
            }
            else
                l=mid+1;
        }
        return res;
    }
};