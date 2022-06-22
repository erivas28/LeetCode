class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        
        for(char c : s) {
            switch(c) {
                case '{':
                    myStack.push('}');
                    break;
                case '[':
                    myStack.push(']');
                    break;
                case '(':
                    myStack.push(')');
                    break;
                default:
                    if(myStack.size() == 0 || myStack.top() != c) {
                        return false;
                    }
                    else {
                        myStack.pop();
                    }
            }
        }
        
        return myStack.empty();
        
    }
};