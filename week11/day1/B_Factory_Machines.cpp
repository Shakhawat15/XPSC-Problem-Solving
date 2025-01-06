#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 1e18, result = 1e18;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll product = 0;
        for (int i = 0; i < n; i++)
        {
            product += min(mid / a[i], (ll)1e9);
        }
        if (product >= t)
        {
            if (mid < result)
                result = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << result << endl;

    return 0;
}