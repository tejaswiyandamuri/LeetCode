class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> res(A.size(),0);
        unordered_map<int,int> freq;
        int common=0;
        for(int i=0;i<A.size();i++){
            freq[A[i]]++;
            freq[B[i]]++;
            if(freq[A[i]]>=2){
                common++;;
            }
            if(A[i]!=B[i]&&freq[B[i]]>=2){
                common++;
            }
            res[i]=common;
        }
        return res;
    }
};