class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n==0)
            return {};
        unordered_map<int, int> mp;
        vector<int> temp = arr;
        sort(arr.begin(), arr.end());
        int uniques = 1;
        mp[arr[0]] = 1;
        for (int i = 1; i < arr.size(); i++) {
            int x = arr[i];
            if (arr[i - 1] != arr[i])
                uniques++;
            mp[x] = uniques;
        }
        for (int i = 0; i < n; i++) {
            temp[i] = mp[temp[i]];
        }
        return temp;
    }
};