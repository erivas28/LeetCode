class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        
        int n = nums.size() - 1;
        
        reverse(nums, 0, n);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n);
    }
    
    void reverse(vector<int>& nums, int left, int right) {
        while(left < right) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
};