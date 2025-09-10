#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        string word = "";
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0) {
            ans += " " + word;
        }
    }

    return ans.substr(1); // Removes the leading space
}

int main() {
    string s = "the sky is blue"; // Example string
    string result = reverseWords(s);
    cout << "Reversed words: " << result << endl;
    return 0;
}