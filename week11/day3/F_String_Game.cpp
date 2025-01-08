#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    auto possible = [&](int diff) -> bool
    {
        vector<bool> removed(n, false);
        for (int i = 0; i < diff; i++)
        {
            removed[a[i]] = true;
        }
        int j = 0;
        for (int i = 0; i < n && j < m; i++)
        {
            if (!removed[i] && t[i] == p[j])
            {
                j++;
            }
        }
        return j == m;
    };

    int l = 0, r = n - 1, mid, result = 0;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (possible(mid))
        {
            result = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << result << endl;

    return 0;
}