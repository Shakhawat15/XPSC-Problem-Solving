#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll k, n;
    cin >> k >> n;
    vector<ll> a(n), c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll l = 1;
    ll r = 1e12;
    ll result = r;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll sm = 0;
        for (ll i = 0; i < n; i++)
        {
            ll tot = (mid - 1LL) / c[i];
            tot += 1LL;
            sm += (tot * a[i]);
            if (sm >= k)
            {
                break;
            }
        }
        if (sm >= k)
        {
            result = min(result, mid);
            r = mid - 1LL;
        }
        else
        {
            l = mid + 1LL;
        }
    }
    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}