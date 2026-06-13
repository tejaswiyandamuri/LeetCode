class StockSpanner {
public:
    vector<int> prices;
    StockSpanner() {
        
    }
    
    int next(int price) {
        prices.push_back(price);
        stack<int> st;
        int res=0,n=prices.size();
        int i;
        for( i=n-1;i>=0;i--){
            if(prices[i]>price)
                break;
        }
        res=n-i-1;
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */