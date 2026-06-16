class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int res = 0;
        for (auto x : ops) {
            if (x == "C") {
                if (!st.empty()) {
                    st.pop();
                }
            } else if (x == "D") {
                st.push(st.top() * 2);
            } else if (x == "+") {
                if (st.size() >= 2) {
                    int x = st.top();
                    st.pop();
                    int y = st.top();
                    st.push(x);
                    st.push(x + y);
                }
            } else {
                st.push(stoi(x));
            }
        }
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        return res;
    }
};