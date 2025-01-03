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
        int n, q;
        cin >> n >> q;
        vector<int> a(n), pref(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i - 1];
        }

        while (q--)
        {
            int k, result = -1;
            cin >> k;
            auto it = lower_bound(pref.begin(), pref.end(), k);
            if (it != pref.end())
                result = it - pref.begin();
            cout << result << endl;
        }
    }

    return 0;
}