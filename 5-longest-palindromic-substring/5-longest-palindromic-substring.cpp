class Solution {
public:
    string longestPalindrome(string s) {
        int left = 0;
        int right = 0;
        
        for(int i = 0; i < s.length(); i++) {
            int len1 = expandFromMiddle(s, i, i);
            int len2 = expandFromMiddle(s, i, i + 1);
            
            int maxLen = max(len1, len2);
            
            if(maxLen > right-left) {
                left = i - ((maxLen - 1) / 2);
                right = i + (maxLen / 2);
            }
        }
        
        return s.substr(left, right - left + 1);
        
    }
    
    int expandFromMiddle(string s, int left, int right) {
            while(left >= 0 && right < s.length() && s[left] == s[right]) {
                right++;
                left--;
            }
            
            return right - left - 1;
        }
};