// C++ (intermedio) - Strutures and Enumerations
// -----------------------------------------------------------------------------------------------
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine
// if the input string is valid.
//
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
// -----------------------------------------------------------------------------------------------
// Example 1:
// Input: s = "()"
// Output: true
// -----------------------------------------------------------------------------------------------
// Example 2:
// Input: s = "()[]{}"
// Output: true
// -----------------------------------------------------------------------------------------------
// Example 3:
// Input: s = "(]"
// Output: false
// -----------------------------------------------------------------------------------------------
// Example 4:
// Input: s = "([])"
// Output: true

#include <iostream>
#include <stack>
#include <stdlib.h>

using namespace std;

bool isValidParenthesis(string str) {
    stack<char> stack;
            
    for(char ch: str) {
        if(ch == '(' || ch == '{' || ch == '[')
            stack.push(ch);
        else {
            if(stack.empty()) return false;

            char top = stack.top();
            stack.pop();

            if((ch == ')' && top != '(') ||
               (ch == '}' && top != '{') ||
               (ch == ']' && top != '['))
                return false;
        }
    }

    return stack.empty();
}

int main() {
    cout << "test 1 => \"()\": " << boolalpha << isValidParenthesis("()") << "\n\n";
    cout << "test 2 => \"()[]{}\": " << boolalpha << isValidParenthesis("()[]{}") << "\n\n";
    cout << "test 3 => \"(]\": " << boolalpha << isValidParenthesis("(]") << "\n\n";
    cout << "test 4 => \"([])\": " << boolalpha << isValidParenthesis("([])") << endl;
    
    return 0;
}
