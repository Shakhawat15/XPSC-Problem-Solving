#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n + 1, 0), pref(n + 1, 0), ans(q);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            pref[i] = (a[i] + pref[i - 1]);
        }

        vector<pair<ll, int>> k(q);
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            k[i] = {x, i};
        }

        sort(k.begin(), k.end());
        int ap = 0;
        for (int i = 0; i < q; i++)
        {
            while (1)
            {
                if (ap == n || a[ap + 1] > k[i].first)
                    break;
                ap++;
            }
            ans[k[i].second] = pref[ap];
        }
        for (ll val : ans)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}