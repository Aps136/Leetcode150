class RandomizedSet {
private:
    vector<int> arr;
    unordered_map<int,int> hs;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(hs.find(val)!=hs.end())
            return false;
        else{
            arr.push_back(val);
            hs[val]=arr.size()-1;
            return true;
        }
        
    }
    
    bool remove(int val) {
        if(hs.find(val)==hs.end())
            return false;
        else{
            int last= arr.back();
            arr[hs[val]]=arr.back();
            arr.pop_back();
            hs[last]=hs[val];
            hs.erase(val);
            return true;
        }
        
    }
    
    int getRandom() {
        return arr[rand() %arr.size()];
        
    }
};
//array - insertion o(1),  searching - o(n)
//so we use hashmaps
/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
