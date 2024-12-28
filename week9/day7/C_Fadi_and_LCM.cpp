#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    vector<ll> lcm;
    ll i = 2;
    while (i * i <= x)
    {
        if (x % i == 0)
        {
            ll cur = 1;
            while (x % i == 0)
            {
                x /= i;
                cur *= i;
            }
            lcm.push_back(cur);
        }
        i++;
    }

    if (x > 1)
    {
        lcm.push_back(x);
    }
    ll n = lcm.size();
    ll ansA = 1e18;
    ll ansB = 1e18;

    ll k = 0;
    while (k < (1 << n))
    {
        ll a = 1;
        ll b = 1;

        ll j = 0;
        while (j < n)
        {
            if ((k >> j) & 1)
            {
                a *= lcm[j];
            }
            else
            {
                b *= lcm[j];
            }
            j++;
        }

        if (max(a, b) < max(ansA, ansB))
        {
            ansA = a;
            ansB = b;
        }
        k++;
    }
    cout << ansA << " " << ansB << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}