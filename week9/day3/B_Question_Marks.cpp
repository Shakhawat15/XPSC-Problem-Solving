#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '?')
                mp[s[i]]++;
        }

        int result = 0;

        for (auto [x, y] : mp)
        {
            if (y > n)
                result += n;
            else
                result += y;
        }

        cout << result << endl;
    }

    return 0;
}