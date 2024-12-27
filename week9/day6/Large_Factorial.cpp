#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, result = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            result = (1LL * result % MOD * i % MOD) % MOD;
        }
        cout << result << endl;
    }

    return 0;
}