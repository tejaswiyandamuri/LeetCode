class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size();
        int res = 0;
        // last index of each vowel seen in current valid window
        int lastA = -1, lastE = -1, lastI = -1, lastO = -1, lastU = -1;
        int start = -1; // last index where a non-vowel occurred

        for (int i = 0; i < n; i++) {
            char c = word[i];
            if (c == 'a') lastA = i;
            else if (c == 'e') lastE = i;
            else if (c == 'i') lastI = i;
            else if (c == 'o') lastO = i;
            else if (c == 'u') lastU = i;
            else {
                // reset everything when non-vowel found
                start = i;
                lastA = lastE = lastI = lastO = lastU = -1;
                continue;
            }

            // The leftmost of all vowels gives the earliest start of valid substring
            int minLast = min({lastA, lastE, lastI, lastO, lastU});
            if (minLast > start) {
                // All substrings ending at i and starting from (start+1 to minLast) are valid
                res += (minLast - start);
            }
        }

        return res;
    }
};
