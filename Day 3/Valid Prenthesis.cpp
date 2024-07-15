/*
By: Anshul Kansal
Link for question : https://leetcode.com/problems/valid-parentheses/
*/

class Solution {
public:
    bool isValid(string x) {
        stack<char> s;
        for (int i = 0; i < x.length(); i++) {
            char ch = x[i];
            if (ch == '(' || ch == '[' || ch == '{') {
                s.push(ch);
            } else {
                if (!s.empty()) {
                    if ((ch == ']' && s.top() == '[') ||
                        (ch == '}' && s.top() == '{') ||
                        (ch == ')' && s.top() == '('))
                        s.pop();

                    else
                        return false;
                } else
                    return false;
            }
        }

        if (s.empty())
            return true;
        else
            return false;
    }
};