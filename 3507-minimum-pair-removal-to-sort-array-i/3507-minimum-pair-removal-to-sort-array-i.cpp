class Solution {
public:
    bool isSorted(vector<int> &n){
        for(int i=0;i<n.size()-1;i++){
            if(n[i]>n[i+1])return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int n=nums.size(),res=0;
        if( isSorted(nums)) return 0;
        while(!isSorted(nums)){
            int min_sum=INT_MAX,idx=0;
            for(int i=0;i<nums.size()-1;i++){
                int cur_sum=nums[i]+nums[i+1];
                if(cur_sum<min_sum){
                    idx=i;  
                    min_sum=cur_sum;
                }
            }
            cout<<idx<<" ";
            nums[idx]=min_sum;
            nums.erase(nums.begin()+idx+1);
            res++;
        }
        return res;
    }
};