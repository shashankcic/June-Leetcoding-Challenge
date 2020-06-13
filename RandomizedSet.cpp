class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(!m_.count(val)) {
            v_.push_back(val);
            m_[val]=v_.size()-1;
            return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(m_.count(val)){
            int i=m_[val];
            swap(v_[i], v_[v_.size()-1]);
            v_.pop_back();
            m_[v_[i]]=i;
            m_.erase(val);
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int i=rand()%m_.size();
        return v_[i];
        
    }
    
private:
    vector<int> v_;
    unordered_map<int, int> m_;
};
