class Solution {
public:
    int numWaterBottles(int n, int ne) {
        int res=n,empty=n;
        while(empty>=ne){
            n=(empty)/ne;
            empty=n+(empty)%ne;
            res+=n;
        }
        return res;
    }
};