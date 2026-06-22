class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        for(char t:text)
            mp[t]++;
        int x=min(min(mp['b'],mp['a']),mp['n']);
        if(mp['l']==x*2&&mp['o']==x*2)
            return x;
        int y=min(mp['l'],mp['o']);
        return min(x,y/2);
    }
};