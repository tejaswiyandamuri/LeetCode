class CustomStack {
public:
    vector<int> st;
    int size=0;
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(st.size()<size){
            st.push_back(x);
        }
    }
    
    int pop() {
        int s= (st.size()>0)?st[st.size()-1]:-1;
        int x=st.size()-1;
        if(x>=0)
            st.erase(st.begin()+x,st.end());
        return s;
    }
    
    void increment(int k, int val) {
        int p=st.size();
        int upto=(k<p)?k:p;
        for(int i=0;i<upto;i++)
            st[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */