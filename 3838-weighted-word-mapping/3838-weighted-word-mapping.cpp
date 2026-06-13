class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s;
        for(auto word:words){
            int weight=0;
            for(int i=0;i<word.length();i++){
                weight+=(weights[word[i]-'a']);
            }
            char c=122-(weight%26);
            s+=c;
        }
        return s;
    }
};