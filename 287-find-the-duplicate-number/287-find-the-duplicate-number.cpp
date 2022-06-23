class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 1;
        int right = nums.size() - 1;
        
        while(left <= right) {
            int mid = left + (right - left) / 2;
            
            int count = 0;
            
            for(int x : nums) {
                if(x <= mid) {
                    count++;
                }
            }
            
            if(count <= mid) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        return left;
    }
};


// Input: nums = [1,3,4,2,2]
//                0 1 2 3 4 
// Output: 2