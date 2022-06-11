class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        
        for(int x : nums) {
            if(mySet.find(x) != mySet.end()) {
                return true;
            }
            
            mySet.insert(x);
        }
        
        return false;
    }
};