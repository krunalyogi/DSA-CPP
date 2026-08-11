#include <iostream>
using namespace std;

bool isPalindrome(const string &s, int l, int r) {
    if (l >= r) {
        return true;
    }
    if (s[l] != s[r]) {
        return false;
    }
    return isPalindrome(s, l + 1, r - 1);
}

int main() {
    string s = "madam";
    bool result = isPalindrome(s, 0, static_cast<int>(s.size()) - 1);
    if (result) {
        cout << s << " is a palindrome.";
    } else {
        cout << s << " is not a palindrome.";
    }
    return 0;
}