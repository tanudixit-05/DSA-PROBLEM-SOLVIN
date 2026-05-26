class Solution {
public:
    bool isPalindrome(string s) {
        while (left < right && !isalnum(s[left])) left++;

        // skip non-alphanumeric from right
        while (left < right && !isalnum(s[right])) right--;

        // base case
        if (left >= right) return true;

        // compare lowercase characters
        if (tolower(s[left]) != tolower(s[right]))
            return false;

        // recursive call
        return check(s, left + 1, right - 1);
    }

    bool isPalindrome(string s) {
        return check(s, 0, s.length() - 1);
    
    
    }
};
