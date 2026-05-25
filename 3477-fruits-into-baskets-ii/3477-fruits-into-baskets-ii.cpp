class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int res=0,n=fruits.size();
        vector<bool> filled(n,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(baskets[j]>=fruits[i]&&(!filled[j])){
                    res++;
                    filled[j]=true;
                    break;
                }
            }
        }
        return n-res;
    }
};