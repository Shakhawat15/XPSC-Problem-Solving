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
        ll n;
        cin >> n;
        int maxBit = __lg(n);
        deque<ll> result;
        for (int i = 0; i <= maxBit; i++)
        {
            if ((n >> i) & 1)
            {
                ll value = n - (1LL << i);
                if (value > 0)
                    result.push_front(value);
            }
        }

        result.push_back(n);

        cout << result.size() << endl;
        for (ll val : result)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}