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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        auto possible = [&](ll diff) -> bool
        {
            int cnt = 1;
            int l = 0, r = 1;
            while (r < n)
            {
                if (a[l] + 2 * diff >= a[r])
                {
                    r++;
                }
                else
                {
                    cnt++;
                    l = r;
                    r++;
                }
            }
            return cnt < 4;
        };

        ll l = 0, r = 1e15, result;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (possible(mid))
            {
                result = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << result << endl;
    }

    return 0;
}