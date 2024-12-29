#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    map<char, int> mp;

    for (char val : s)
    {
        mp[val]++;
    }

    int cnt = 0;

    for (auto [x, y] : mp)
    {
        if (y % 2 == 1)
        {
            cnt++;
            if (cnt > 1)
            {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }

    string result = "";
    char c = '#';

    for (auto [x, y] : mp)
    {
        for (int i = 0; i < y / 2; i++)
        {
            result += x;
        }
        if (y % 2 == 1)
            c = x;
    }

    s = result;
    if (c != '#')
        s += c;
    reverse(result.begin(), result.end());
    s += result;
    cout << s << endl;
    return 0;
}