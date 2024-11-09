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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        int oddCount = 0;

        for (auto [x, y] : mp)
        {
            if (y % 2 != 0)
                oddCount++;
        }

        if (oddCount - 1 < 0)
            oddCount = 0;
        else
            oddCount--;

        if (k >= oddCount)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}