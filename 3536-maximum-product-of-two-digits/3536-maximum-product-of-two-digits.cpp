class Solution {
public:
    int maxProduct(int n) {
        int sec=-1,mx=-1;
        while(n>0){
            int rem=n%10;
            if(rem>=mx){
                sec=mx;
                mx=rem;
            }
            if(rem<mx&&rem>=sec)
                sec=rem;
            n/=10;
        }
        return mx*sec;
    }
};