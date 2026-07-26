class Solution {
public:
    bool checkforce(vector<int>& p, int m,int mid){
        int placed=1,last=p[0];
        for(int i=1;i<p.size();i++){
            if(p[i]-last>=mid){
                last=p[i];
                placed++;
            }
            if(placed==m)
                return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size(),res=0;
        int l=1,h=position[n-1]-position[0];
        while(l<=h){
            int mid=l+(h-l)/2;
            if(checkforce(position,m,mid)){
                res=mid;
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return res;
    }
};