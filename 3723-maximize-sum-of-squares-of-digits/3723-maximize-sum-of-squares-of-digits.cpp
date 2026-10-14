class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string res="";
        long long s=0,isum=sum;
        while(sum>0&&num>0){
            int val=(sum>=9)?9:sum;
            sum-=9;
            s+=val;
            res+=(val+'0');
            num--;
        }
        while(num>0){
            res+='0';
            num--;
        }
        return s==isum?res:"";
    }
};