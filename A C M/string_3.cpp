#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> beforeSlash;
    vector<char> afterSlash;
    char ch;
    bool foundSlash = false;
    while (cin.get(ch)) {
        if (ch == '/') {
            foundSlash = true;
            continue;
        }
        if (!foundSlash) {
            beforeSlash.push_back(ch);
        } else {
            afterSlash.push_back(ch);
        }
    }

    for (char c : beforeSlash) {
        cout << c;
    }

    cout << endl;

    for (char c : afterSlash) {
        cout << c;
    }

    cout << endl;
    return 0;
}
