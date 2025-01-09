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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        auto Possible = [&](ll mid) -> bool
        {
            ll totalWater = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < mid)
                    totalWater += (mid - a[i]);
            }

            return totalWater > x;
        };

        ll l = 1, r = 1e10, mid;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (Possible(mid))
                r = mid - 1;
            else
                l = mid + 1;
        }

        cout << l - 1 << endl;
    }

    return 0;
}