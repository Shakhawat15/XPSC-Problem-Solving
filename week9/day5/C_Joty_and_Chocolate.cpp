#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll cd = lcm(a, b);
    ll cdCnt = n / cd;

    ll aDiv = n / a - cdCnt;
    ll bDiv = n / b - cdCnt;

    ll result = (aDiv * p) + (bDiv * q);

    if (p > q)
        result += cdCnt * p;
    else
        result += cdCnt * q;

    cout << result << endl;

    return 0;
}