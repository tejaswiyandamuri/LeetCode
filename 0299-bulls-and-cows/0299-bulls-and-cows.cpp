class Solution {
public:
    string getHint(string secret, string guess) {
        int b=0,c=0;
        unordered_map<char,int> mp;
        vector<int> pos;
        for(int i=0;i<guess.size();i++){
            mp[secret[i]]++;
            if(secret[i]==guess[i]){
                mp[secret[i]]--;
                b++;
            }
            else 
                pos.push_back(i);
        }
        for(int i=0;i<pos.size();i++){
            if(mp[guess[pos[i]]]>0){
                c++;
                mp[guess[pos[i]]]--;
            }
        }
        return to_string(b)+"A"+to_string(c)+"B";
    }
};