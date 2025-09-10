#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    vector<string> v;
    v.push_back(a);
    v.push_back(" ");
    v.push_back(b);
    int length_a = a.length();
    int length_b = b.length();
    cout << length_a << " " << length_b << endl;
    for (string m : v)
    {
        cout << m;
    }
    cout << endl;
    return 0;
}