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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> temp(a);

        sort(temp.begin(), temp.end());

        map<int, int> mp2;

        map<int, set<int>> mp;

        for (int i = 0; i < n; i++)
        {
            mp[i % k].insert(a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            auto check = mp[i % k];
            if (check.find(temp[i]) == check.end())
                mp2[i % k]++;
        }

        if (mp2.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }

        int cnt = 0;
        for (auto [x, y] : mp2)
        {
            if (y == 1)
                cnt++;
            else
                cnt += 100;
        }

        if (cnt == 2)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}