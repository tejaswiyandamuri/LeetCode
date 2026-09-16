class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int l=0,r=colors.size()-1;
        while(l<r){
            if(colors[l]!=colors[r])return r-l;
            else {
                int i=l,j=r;
                while(i<r&&colors[i]==colors[r])i++;
                while(j>l&&colors[j]==colors[l])j--;
                if(i-l>=r-j)
                    r=j;
                else
                    l=i;
            }
        }
        return 0;
    }
};