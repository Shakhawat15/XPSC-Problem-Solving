#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll s;
    int n;
    cin >> n >> s;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll x = 0;

    int l = 0, result = INT_MAX;

    for (int r = 0; r < n; r++)
    {
        x += a[r];
        while (x - a[l] >= s)
        {
            x -= a[l];
            l++;
        }

        if (x >= s)
            result = min(result, r - l + 1);
    }

    if (result == INT_MAX)
        cout << -1 << endl;
    else
        cout << result << endl;

    return 0;
}