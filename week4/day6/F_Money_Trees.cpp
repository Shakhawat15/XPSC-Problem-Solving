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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        ll currentVal = a[0], result = 0;
        int l = 0, r = 1;

        if (currentVal <= k)
            result++;

        while (r < n)
        {
            if (h[r - 1] % h[r] == 0)
                currentVal += a[r];
            else
            {
                currentVal = a[r];
                l = r;
            }

            while (currentVal > k)
                currentVal -= a[l++];

            result = max(result, r - l + 1LL);
            r++;
        }

        cout << result << endl;
    }

    return 0;
}