class Solution {
public:
    void generate(vector<string> &res, string &s,int n,int oc,int cc){
        if(s.length()==n*2){
            res.push_back(s);
            return;
        }
        if(oc<n){
            s+='(';
            generate(res,s,n,oc+1,cc);
            s.pop_back();
        }
        if(oc>cc){
            s+=')';
            generate(res,s,n,oc,cc+1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s="";
        generate(res,s,n,0,0);
        return res;
    }
};