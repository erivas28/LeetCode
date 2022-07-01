class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        
        for(int num : nums) {
            if(mySet.find(num) != mySet.end()) {
                return true;
            }
            
            mySet.insert(num);
        }
        
        return false;
    }
};