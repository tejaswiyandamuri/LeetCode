class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int n=arr.size();
       vector<int> diff(n,0);
       for(int i=0;i<n;i++)
            diff[i]=abs(arr[i]-x);
        int l=0,r=0,minl=0;
        long long minsum=INT_MAX,tempsum=0;
        while(r<n){
            tempsum+=diff[r];
            if(r-l+1>k)
                tempsum-=diff[l++];
            if(r-l+1==k){
                if(minsum>tempsum){
                    minsum=tempsum;
                    minl=l;
                }
            }
            r++;
        }
        vector<int> res;
        for(int i=minl;i<minl+k;i++)
            res.push_back(arr[i]);
        return res;
    }
};