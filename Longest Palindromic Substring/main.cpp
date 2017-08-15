#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int maxLength = 0;
int start = 0;

void checkPalindrome(string s, int i, int j) {
    while (i >= 0 && j < s.size()) {
        if (s[i] != s[j])
            break;
        i--;
        j++;
    }
    printf("i = %d; j = %d\n", i, j);
    if (maxLength < j - i - 1) {
        maxLength = j - i - 1;
        start = i + 1;
    }
}

string longestPalindrome(string s) {
    if (s.size() < 2)
        return s;

    maxLength = 0;
    start = 0;

    for (int i = 0; i < s.size() - 1; i++) {
        checkPalindrome(s, i, i);
        checkPalindrome(s, i, i+1);
    }
    
    printf("%d %d\n", maxLength, start);
    return s.substr(start, maxLength);
};

int main()
{
    cout << longestPalindrome("bb") << endl;
    return 0;
};