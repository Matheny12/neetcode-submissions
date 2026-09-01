#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return ispunct(c);
        }), s.end());

        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return isspace(c);
        }), s.end());

    for (char &c : s) {
        c = tolower(static_cast<unsigned char>(c));
    }

    string rev_s = s;

    reverse(rev_s.begin(), rev_s.end());

    if (rev_s == s) {
        return true;
    }
    else {
        return false;
    }
    }
};
