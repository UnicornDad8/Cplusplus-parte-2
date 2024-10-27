// C++ (intermedio) - Strings
// -----------------------------------------------------------------------------------------------
// Longest common prefix
// -----------------------------------------------------------------------------------------------
// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".
// -----------------------------------------------------------------------------------------------
// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// -----------------------------------------------------------------------------------------------
// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    size_t n = strs.size();

    if(strs.empty()) return "";

    string s = strs[0];
    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < strs[i].size(); j++) {
            if(s[j] != strs[i][j])
                break;
        }

        s = s.substr(0, j);

        if(s.empty()) return "";
        
    }

    return s;
}

int main() {
    vector<string> test_1 = { "flower", "flow", "flight" };
    vector<string> test_2 = { "dog", "racecar", "car" };
    
    cout << "\"" << longestCommonPrefix(test_1) << "\"" << endl;
    cout << "\"" << longestCommonPrefix(test_2) << "\"" << endl;
   
    return 0;
}
