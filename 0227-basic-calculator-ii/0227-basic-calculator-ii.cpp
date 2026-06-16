class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int res=0,num=0,i=0;
        char sign='+';
        for(auto c:s){
            if(isdigit(c))
                num=(num)*10+(c-'0');
            if(!isspace(c)&&!isdigit(c)||i==s.size()-1){
                if(sign=='+')
                    st.push(num);
                if(sign=='-')
                    st.push(-num);
                if(sign=='*'){
                        int x=st.top();
                        st.pop();
                        st.push(num*x);
                     }
                if(sign=='/'){
                        int x=st.top();
                        st.pop();
                        st.push(x/num);
                     }
                num=0;
                sign=c;
            }
            i++;
        }  
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }  
        return res;    
    }
};