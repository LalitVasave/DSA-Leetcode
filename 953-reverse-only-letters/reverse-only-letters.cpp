class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.length();
        int st = 0;
        int end = n - 1;

        while (st < end) {
            if (isalpha(s[st]) && isalpha(s[end])) {
                swap(s[st], s[end]);
                st++;
                end--;
            } else if (!isalpha(s[st])) {
                st++;
            } else {
                end--;
            }
        }
        return s;
    }
};