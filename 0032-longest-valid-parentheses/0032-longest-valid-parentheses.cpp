class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);  // base index to calculate valid lengths
        int maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);  // push index of '('
            } else {
                st.pop();  // pop a matching '('
                if (st.empty()) {
                    st.push(i);  // set new base for future valid substring
                } else {
                    maxLen = max(maxLen, i - st.top());  // update max
                }
            }
        }

        return maxLen;
    }
};
