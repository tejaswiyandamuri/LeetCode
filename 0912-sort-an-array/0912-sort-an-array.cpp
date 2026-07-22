class Solution {
public:
    void merge(vector<int>& arr,int l,int m,int r){
        vector<int> temp(r-l+1);
        int x=0,j=m+1,l2=l;
        while(l<=m&&j<=r){
            if(arr[l]<=arr[j])
                temp[x++]=arr[l++];
            else
                temp[x++]=arr[j++];
        }
        while(l<=m)
            temp[x++]=arr[l++];
        while(j<=r)
            temp[x++]=arr[j++];
        for(int i=0;i<temp.size();i++)
            arr[l2++]=temp[i];
    }
    void mergesort(vector<int>& arr,int l,int r){
        if(l<r){
            int mid=(l+r)/2;
            mergesort(arr,l,mid);
            mergesort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};