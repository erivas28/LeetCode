class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = maxSum;
        
        for(int i = 1; i < nums.size(); i++) {
            currentSum = max(currentSum + nums[i], nums[i]);
            maxSum = max(currentSum, maxSum);
        }
        
        return maxSum;
    }
};