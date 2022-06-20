class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        
        int left = 0;
        int right = nums.size() - 1;
        
        for(int i = right; i >= 0; i--) {
            if(abs(nums[right]) > abs(nums[left])) {
                result[i] = nums[right] * nums[right];
                right--;
            }
            else {
                result[i] = nums[left] * nums[left];
                left++;
            }
        }
        
        return result;
    }
};