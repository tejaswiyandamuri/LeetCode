class StockSpanner {
public:
    vector<int> prices;
    stack<int> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        prices.push_back(price);
        int i=prices.size()-1;
        while(!st.empty()&&prices[st.top()]<=price){
            st.pop();
        }
        int res=(!st.empty())?i-st.top():i+1;
        st.push(i);
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */