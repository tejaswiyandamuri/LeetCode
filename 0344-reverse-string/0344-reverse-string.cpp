class Solution {
public:
    void revers(vector<char>& x,int l,int r){
        if(l>=r)return;
        revers(x,l+1,r-1);
        swap(x[l],x[r]);
    }
    void reverseString(vector<char>& s) {
        revers(s,0,(int)s.size()-1);
    }
};