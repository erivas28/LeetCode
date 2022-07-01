class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) {
            return n;
        }
        
        int prev = 2;
        int prev2 = 1;
        int res = 0;
        
        for(int i = 3; i <= n; i++) {
            res = prev + prev2;
            prev2 = prev;
            prev = res;
        }
        
        return res;
    }
};