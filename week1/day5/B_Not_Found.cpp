#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<int, int> mp;

    for (int i = 0; i < 26; i++)
    {
        mp[i] = 0;
    }

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i] - 97]++;
    }

    string result = "None";

    for (auto [x, y] : mp)
    {
        char val = x + 97;
        if (y == 0)
        {
            result = val;
            break;
        }
    }

    cout << result << endl;

    return 0;
}