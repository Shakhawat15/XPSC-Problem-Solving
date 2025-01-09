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
        int n, k;
        cin >> n >> k;

        auto Possible = [&](int diff)
        {
            return (diff - (diff / n)) >= k;
        };

        int l = 1, r = 2e9, mid, result;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (Possible(mid))
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