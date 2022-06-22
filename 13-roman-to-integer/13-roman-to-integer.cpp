class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> myMap {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        int answer = 0;
        
        for(int i = 0; i < s.length(); i++) {
            if(myMap[s[i]] >= myMap[s[i+1]]) {
                answer += myMap[s[i]];
            }
            else {
                answer -= myMap[s[i]];
            }
        }
        
        return answer;
    }
};