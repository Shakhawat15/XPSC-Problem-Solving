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

        auto getSum = [&](ll a, ll x) -> ll
        {
            ll sum = 2 * a + x - 1;
            sum *= x;
            sum /= 2;
            return sum;
        };

        ll l = 1, r = n, result = 1e18, mid;

        while (l <= r)
        {
            mid = (l + r) / 2;
            ll result1 = getSum(k, mid), result2 = getSum(k + mid, n - mid);
            result = min(result, abs(result1 - result2));
            if (result2 >= result1)
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << result << endl;
    }

    return 0;
}