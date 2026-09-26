class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        bool opened=false;
        string res="",cur="";
        res.reserve(s.size());

        unordered_map<string,string> mp;
        for(auto x:knowledge)
            mp[x[0]]=x[1];

        for(auto x:s){
            if(x=='('){
                opened=true;
                continue;
            }

            if(opened){
                if(x==')'){
                    auto it=mp.find(cur);
                    if(it==mp.end())
                        res+='?';
                    else
                        res+=it->second;

                    opened=false;
                    cur="";
                }
                else
                    cur+=x;
            }
            else
                res+=x;
        }

        return res;
    }
};