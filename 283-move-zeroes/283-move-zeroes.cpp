class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int prev = 0;
        int current = 0;
        
        while(current < nums.size()) {
            if(nums[current] != 0) {
                swap(nums[prev], nums[current]);
                prev++;
            }
            
            current++;
        }
    }
};