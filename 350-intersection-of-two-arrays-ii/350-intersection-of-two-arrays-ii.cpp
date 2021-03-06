class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> frequency;
        vector<int> result;
        
        for(int i = 0; i < nums1.size(); i++) {
            frequency[nums1[i]]++;
        }
        
        for(int i = 0; i < nums2.size(); i++) {
            if(frequency[nums2[i]] > 0) {
                frequency[nums2[i]]--;
                result.push_back(nums2[i]);
            }
        }
        
        return result;
    }
};