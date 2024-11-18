#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll x = 0;

    ll l = 0, result = 0;
    for (int r = 0; r < n; r++)
    {
        x += v[r];
        while (x > s)
        {
            x -= v[l];
            l++;
        }
        result = max(result, r - l + 1);
    }

    cout << result << endl;

    return 0;
}