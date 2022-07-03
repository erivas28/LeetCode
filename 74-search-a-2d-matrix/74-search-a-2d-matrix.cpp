class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size() == 0)
            return false;
                                                                
        int row = matrix.size();
        int col = matrix[0].size();
        
        int left = 0;
        int right = row*col - 1;
        
        while(left <= right) {
            int mid = left + (right - left) / 2;
            int midValue = matrix[mid/col][mid%col];
            
            if(midValue == target) {
                return true;
            }
            else if(midValue < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        return false;
    }
};