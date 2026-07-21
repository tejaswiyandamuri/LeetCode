class MyHashSet {
public:
    vector<int> hs;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(find(hs.begin(),hs.end(),key)==hs.end())
            hs.push_back(key);
    }
    
    void remove(int key) {
        if(find(hs.begin(),hs.end(),key)!=hs.end()){
            erase(hs,key);
        }
    }
    
    bool contains(int key) {
        if(find(hs.begin(),hs.end(),key)!=hs.end())
            return true;
        return false;
    }
};
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */