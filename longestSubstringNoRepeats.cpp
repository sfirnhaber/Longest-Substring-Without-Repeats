/*
 * Longest Substring Without Repeating Characters
 * By Sam Firnhaber
 */

#include <set>
#include <algorithm> 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0, i = 0, j = 0;
        set<char> set;
        while (i < s.length() && j < s.length()) {
            if (set.count(s[j]) == 0) {
                set.insert(s[j++]);
                result = max(result, j - i);
            } else
                set.erase(s[i++]);
        }
        return result;
    }
};
