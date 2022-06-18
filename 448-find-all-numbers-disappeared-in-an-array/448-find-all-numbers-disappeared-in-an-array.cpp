class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++) {
            int temp = abs(nums[i]) - 1;
            
            if(nums[temp] > 0) {
                nums[temp] = -nums[temp];
            }
            else {
                nums[temp] = nums[temp];
            }
        }
        
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        
        return result;
    }
};