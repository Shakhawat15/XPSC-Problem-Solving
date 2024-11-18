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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int maxACoin = min(a, s / n) * n;
        int bCoin = s - maxACoin;

        if (bCoin <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}