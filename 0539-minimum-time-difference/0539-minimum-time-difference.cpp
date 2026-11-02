class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> nums;
        for(auto x:timePoints){
            int h = stoi(x.substr(0, 2));
            int m = stoi(x.substr(3, 2));
            nums.push_back(h*60+m);
        }
        int res=INT_MAX,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
            res=min(res,nums[i]-nums[i-1]);
        res=min(res,min(abs(nums[n-1]-nums[0]),1440-abs(nums[n-1]-nums[0])));
        return res;
    }
};