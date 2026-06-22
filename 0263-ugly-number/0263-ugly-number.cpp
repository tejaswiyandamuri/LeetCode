class Solution {
public:
    bool isprime(int n){
        if(n==2)
            return true;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
    bool isUgly(int n) {
        if(n<1)
            return false;
        for(int i=1;i<(n/2);i++){
            if(n%i==0){
                int f1=i;
                int f2=n/i;
                if(isprime(f1)&&f1>5)return false;
                if(isprime(f2)&&f2>5)return false;
            }
        }
        return true;
    }
};