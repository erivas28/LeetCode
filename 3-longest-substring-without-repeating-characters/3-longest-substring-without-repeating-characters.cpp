class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int longest = 0;
        
        unordered_set<char> mySet;
        
        while(right < s.length()) {
            if(mySet.find(s[right]) == mySet.end()) {
                mySet.insert(s[right]);
                right++;
                longest = max(longest, right - left);
            }
            else {
                mySet.erase(s[left]);
                left++;
            }
        }
        
        return longest;
    }
};