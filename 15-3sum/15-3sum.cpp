class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &num) {
        
        vector<vector<int>> result;
        
        sort(num.begin(), num.end());
        
        for(int i = 0; i < num.size(); i++)
        {
            int target = -num[i];
            int left = i + 1;
            int right = num.size() - 1;
            
            while(left < right)
            {
                int sum = num[left] + num[right];
                
                if(sum < target)
                {
                    left++;
                }
                else if(sum > target)
                {
                    right--;
                }
                else
                {
                    vector<int> triplet = {num[i], num[left], num[right]};
                    result.push_back(triplet);
                    
                    while(left < right && num[left] == triplet[1])
                    {
                        left++;
                    }
                    
                    while(left < right && num[right] == triplet[2])
                    {
                        right--;
                    }
                }
            }
            
            while(i + 1 < num.size() && num[i + 1] == num[i])
            {
                i++;
            }
        }
        
        return result;
    }
};


