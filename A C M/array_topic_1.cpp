#include <bits/stdc++.h>
using namespace std;
int m1(vector<int> v, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            c++;
        }
    }
    return c;
}
int m2(vector<int> v, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != 0)
        {
            c++;
        }
    }
    return c;
}
int m3(vector<int> v, int n)
{
    int min = *min_element(v.begin(), v.end());
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == min)
        {
            c++;
        }
    }
    return c;
}
void m4(string word)
{
    int sum = 0;
    int size = word.length();
    for (int i = 0; i < size; i++)
    {
        sum = sum + word[i] - '0';
    }
    cout << sum << endl;
}
int main()
{
    string word;
    cin >> word;
    m4(word);
    return 0;
}