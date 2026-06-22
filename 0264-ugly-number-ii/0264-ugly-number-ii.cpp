class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long , vector<long>, greater<long>> minheap;
        unordered_map<long,long> freq;
        minheap.push(1);
        int x=1;
        freq[1]=1;
        while(x<n){
            int min=minheap.top();
            if(freq[(long)2*min]==0){
                minheap.push((long)2*min);
                freq[(long)2*min]++;
            }
            if(freq[(long)3*min]==0){
                minheap.push((long)3*min);
                freq[(long)3*min]++;
            }
            if(freq[(long)5*min]==0){
                minheap.push((long)5*min);
                freq[(long)5*min]++;
            }
            freq[min]--;
            minheap.pop();
            x++;
        }
        return minheap.top();
    }
};