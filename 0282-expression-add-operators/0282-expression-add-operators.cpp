class Solution {
public:
    void add(string& num, int& target, vector<string>& res, string ds,
             long long cur, long long prev, int idx) {

        if(idx==num.size()){
            if(cur==target)
                res.push_back(ds);
            return;
        }

        long long x=0;

        for(int i=idx;i<num.size();i++){

            if(num[idx]=='0' && i>idx)
                break;

            x=x*10+(num[i]-'0');
            string s=num.substr(idx,i-idx+1);

            if(idx==0){
                add(num,target,res,s,x,x,i+1);
            }
            else{
                add(num,target,res,ds+"+"+s,
                    cur+x,x,i+1);

                add(num,target,res,ds+"-"+s,
                    cur-x,-x,i+1);

                add(num,target,res,ds+"*"+s,
                    cur-prev+prev*x,prev*x,i+1);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        vector<string> res;
        add(num,target,res,"",0,0,0);
        return res;
    }
};