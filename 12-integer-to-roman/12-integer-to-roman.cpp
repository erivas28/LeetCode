class Solution {
public:
    string intToRoman(int num) {
        const int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        const string roman[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        string answer = "";
        
        for(int i = 0; num != 0; i++) {
            while(num >= values[i]) {
                num -= values[i];
                answer += roman[i];
            }
        }
        
        return answer;
    }
};