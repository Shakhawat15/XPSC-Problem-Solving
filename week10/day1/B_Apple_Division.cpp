#include <bits/stdc++.h>
#define ll long long
using namespace std;

void DevideApple(int i, int n, ll sum1, ll sum2, vector<ll> &v, ll &result)
{
    if (i == n)
    {
        result = min(result, abs(sum1 - sum2));
        return;
    }

    DevideApple(i + 1, n, sum1 + v[i], sum2, v, result);
    DevideApple(i + 1, n, sum1, sum2 + v[i], v, result);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll result = LLONG_MAX;

    DevideApple(0, n, 0, 0, a, result);

    cout << result << endl;

    return 0;
}