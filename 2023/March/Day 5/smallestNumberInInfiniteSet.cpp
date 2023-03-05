// Source : https://leetcode.com/problems/smallest-number-in-infinite-set/submissions/
class SmallestInfiniteSet {
public:
     set<int> s;
    SmallestInfiniteSet() {
       
         for(int i=1;i<=1000;i++)    s.insert(i);
    }
    
    int popSmallest() {
       int it = *s.begin();
        s.erase(it);
        return it;
 
    }
    
    void addBack(int num) {
        
        s.insert(s.end(),num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */