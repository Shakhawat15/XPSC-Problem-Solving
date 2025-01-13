#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll l = 1, r = 1e10, result = 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll k = (mid * (mid - 1) / 2);
        if (k <= n)
        {
            result = max(result, mid);
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    ll x = result * (result - 1) / 2;
    cout << result + (n - x) << endl;
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