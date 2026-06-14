class Solution {
public:
    string build(string str) {
        stack<char> st;
        for (char c : str) {
            if (c == '#') {
                if (!st.empty()) st.pop();
            } else {
                st.push(c);
            }
        }
        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }

    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};
