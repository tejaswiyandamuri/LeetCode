class Solution {
public:
    void backtrack(string &s, int i, int bal, string &cur, unordered_set<string> &res, int rem) {
        if(i == s.size()){
            if(bal == 0 && rem == 0)
                res.insert(cur);
            return;
        }

        if(s[i] == '('){
            cur += '(';
            backtrack(s,i+1,bal+1,cur,res,rem);
            cur.pop_back();

            if(rem)
                backtrack(s,i+1,bal,cur,res,rem-1);
        }
        else if(s[i] == ')'){
            if(bal > 0){
                cur += ')';
                backtrack(s,i+1,bal-1,cur,res,rem);
                cur.pop_back();
            }

            if(rem)
                backtrack(s,i+1,bal,cur,res,rem-1);
        }
        else{
            cur += s[i];
            backtrack(s,i+1,bal,cur,res,rem);
            cur.pop_back();
        }
    }

    vector<string> removeInvalidParentheses(string s) {
        int bal = 0, rem = 0;

        for(char x : s){
            if(x == '(')
                bal++;
            else if(x == ')'){
                if(bal > 0)
                    bal--;
                else
                    rem++;
            }
        }

        rem += bal;

        unordered_set<string> res;
        string cur;

        backtrack(s,0,0,cur,res,rem);

        return vector<string>(res.begin(),res.end());
    }
};