#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;

    map<ll, ll> mp;
    ll sum = 0, cnt = 0;
    mp[sum] = 1;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;
        cnt += mp[sum - x];
        mp[sum]++;
    }

    cout << cnt << endl;

    return 0;
}