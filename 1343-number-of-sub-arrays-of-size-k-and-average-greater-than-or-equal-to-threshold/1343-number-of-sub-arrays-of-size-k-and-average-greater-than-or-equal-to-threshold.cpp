class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int res=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(i<k)
                sum+=arr[i];
            else{
                if(sum/k>=threshold)
                    res++;
                sum+=arr[i];
                sum-=arr[i-k];
            }
        }
        if(sum/k>=threshold)
            res++;
        return res;
    }
};