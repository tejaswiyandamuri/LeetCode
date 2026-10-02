class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         vector<int> a(26,0),t(26,0),p(26,0);
         for(auto x:s1)
            a[x-'a']++;
        t=a;
        int l=0;
        for(int i=0;i<s2.size();i++){
            char x=s2[i];
            if(a[x-'a']==0){
                t=a;
                l=i+1;
            }
            else{                
                t[x-'a']--;
                while(l<i&&t[x-'a']<0){
                    if(a[s2[l]-'a']!=0)
                        t[s2[l]-'a']++;
                    l++;
                }
            }
            if(t==p)return true;
        }
        return false;
    }
};