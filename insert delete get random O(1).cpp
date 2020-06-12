// Time complexity O(1)
//Space complexity O(n)

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_map<int,int> m;
    int ind=0;
    RandomizedSet() {
        ind=0;
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(m.find(val)!=m.end())
            return false;
        m[val]++;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(m.find(val) == m.end())
            return false;
        
        m.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        auto it = m.begin();
        ind = rand() % m.size();
        for (int i=0; i<ind; i++) {
            it++;
        }
        return it->first;    
    }
};