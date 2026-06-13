class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        int r=0;
        while(n>1){
            if(n%2!=0)
                return false;
            n/=2;
            r++;
        }
        if(n<0&&r%2==0)
            return false;
        return true;
    }
};