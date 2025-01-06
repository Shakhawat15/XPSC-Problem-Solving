#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    auto possible = [&](ll v) -> bool
    {
        ll need = 0;
        for (int i = n / 2; i < n; i++)
        {
            if (a[i] < v)
            {
                need += (v - a[i]);
            }
            if (need > k)
            {
                return false;
            }
        }
        return true;
    };

    ll l = 0, r = 1e15, result = 0;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
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