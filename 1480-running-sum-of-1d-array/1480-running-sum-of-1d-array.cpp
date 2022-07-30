class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result(0, nums.size() - 1);;
        int current = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            current += nums[i];
            result.push_back(current);
        }
        
        return result;
    }
};