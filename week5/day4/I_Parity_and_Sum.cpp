#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fun(vector<ll> even, vector<ll> odd)
{
    ll evenSize = even.size();
    ll oddSize = odd.size();
    ll oddMax = odd.back();
    if (oddMax < even[0])
        return evenSize + 1;
    ll ans = 0;
    for (ll i = 0; i < evenSize; i++)
    {
        if (oddMax < even[i])
            return evenSize + 1;
        else
        {
            ans++;
            oddMax += even[i];
        }
    }
    return ans;
}

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
        vector<ll> odd, even;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }

        if (odd.size() == 0 || even.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        ll result = fun(even, odd);
        cout << result << endl;
    }

    return 0;
}