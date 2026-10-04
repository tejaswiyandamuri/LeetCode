class Solution {
public:
    bool checkValidString(string s) {
        stack<int> opens,stars;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='(') opens.push(i);
            else if(s[i]=='*') stars.push(i);
            else {
                if(!opens.empty()) opens.pop();
                else if(!stars.empty()) stars.pop();
                else return false;
            }
        }
        while(!opens.empty()&&!stars.empty()) {
            if(opens.top()>stars.top()) return false;
            opens.pop();
            stars.pop();
        }
        return opens.empty();
    }
};