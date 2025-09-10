#include <iostream>
#include <vector>
#include <algorithm> // for swap
using namespace std;

void reverseString(vector<char>& s) {
    int st = 0, end = s.size() - 1;
    while (st < end) {
        swap(s[st], s[end]);
        st++;
        end--;
    }
}

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'}; // Example string as vector of chars
    
    cout << "Original string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    reverseString(s);

    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}