#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string input;
        getline(cin, input);

        auto it1 = search(input.begin(), input.end(), "010", "010" + 3);
        auto it2 = search(input.begin(), input.end(), "101", "101" + 3);

        if (it1 != input.end() || it2 != input.end())
        {
            cout << "Good\n";
        }
        else
        {
            cout << "Bad\n";
        }
    }
    return 0;
}
