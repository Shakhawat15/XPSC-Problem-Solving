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

    map<ll, ll> mp;
    ll r = 0, result = 0;

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        while (mp.size() > k)
        {
            mp[a[r]]--;
            if (mp[a[r]] == 0)
                mp.erase(a[r]);
            r++;
        }
        result += (i - r + 1);
    }

    cout << result << endl;

    return 0;
}