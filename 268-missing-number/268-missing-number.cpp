class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        
        for (int i : nums) {
            n ^= i;
            n ^= x;
            x++;
        }
        
        return n;
    }
};