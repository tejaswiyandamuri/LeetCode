class Solution {
public:
    int countCollisions(string directions) {
        int res = 0;
        stack<char> st;
        for (int i = 0; i < directions.size(); i++) {
            if (!st.empty()) {
                if (directions[i] == 'L') {
                    if (!st.empty() && st.top() == 'S') {
                        res += 1;
                        st.pop();
                        st.push('S');
                    }
                    else if (!st.empty() && st.top() == 'R') {
                        res += 2;
                        st.pop();
                        while (!st.empty() && st.top() == 'R') {
                            res += 1;
                            st.pop();
                        }
                        st.push('S');
                    }else
                        st.push(directions[i]);
                } else if (directions[i] == 'S') {
                    while (!st.empty() && st.top() == 'R') {
                        res += 1;
                        st.pop();
                    }
                    st.push('S');
                } else
                    st.push(directions[i]);
            } else
                st.push(directions[i]);
        }
        return res;
    }
};