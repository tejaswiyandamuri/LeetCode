class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(auto c:s)
            freq[c]++;
        vector<pair<char,int>> x(freq.begin(),freq.end());
        sort(x.begin(),x.end(),[](const auto& a,const auto& b){
            return a.second>b.second;
        });
        string res="";
        for(auto a:x){
            for(int i=0;i<a.second;i++){
                char c=a.first;
                res+=c;
            }
        }
        return res;
    }
};