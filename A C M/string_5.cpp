#include <bits/stdc++.h>
using namespace std;
int main()

{
    string s;
    getline(cin, s);
    for (char x : s)
    {
        if (islower(x))
        {
            cout << (char)toupper(x);
        }
        else if (isupper(x))
        {
            cout << (char)tolower(x);
        }
        else if (x == ',')
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
