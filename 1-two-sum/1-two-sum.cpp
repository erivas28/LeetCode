class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myMap;
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            
            if(myMap.find(comp) != myMap.end()) {
                result.push_back(myMap[comp]);
                result.push_back(i);
            }
            
            myMap[nums[i]] = i;
        }
        
        return result;
    }
};