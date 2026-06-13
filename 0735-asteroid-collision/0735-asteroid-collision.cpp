class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> res;
        int n=asteroids.size();
        for(int i=n-1;i>=0;i--){
            if(asteroids[i]>=0){
                while(!st.empty()&&asteroids[i]>st.top())
                    st.pop();
                if(st.empty())
                    res.push_back(asteroids[i]);
                if(!st.empty()&&asteroids[i]==st.top())
                    st.pop();
            }
            else{
                    st.push(-1*asteroids[i]);
            }
        }
        vector<int> x;
        while(!st.empty()){
            x.push_back(-st.top());
            st.pop();
        }
        reverse(x.begin(),x.end());
        for(int i=0;i<x.size();i++)
            res.push_back(x[i]);
        reverse(res.begin(),res.end());
        return res;
    }
};