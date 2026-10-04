class Solution {
public:
    int minRotations(string s) {
        int res=0,prev=0;
        for(auto x:s){
            int num=x-'0';
            res+=min(abs(prev-num),abs(9-max(prev,num)+(min(num,prev)+1)));
            // cout<<prev<<" "<<num<<" "<<min(abs(prev-num),abs(9-max(prev,num)+(min(num,prev)+1)))<<"\n";
            prev=num;
        }
        return res;
    }
};