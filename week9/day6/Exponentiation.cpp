#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;

int power(int a, int n)
{
    int result = 1 % MOD;
    while (n)
    {
        if (n & 1)
        {
            result = (1LL * result % MOD * a % MOD) % MOD;
        }
        a = (1LL * a * a) % MOD;
        n >>= 1;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, n;
        cin >> a >> n;
        cout << power(a, n) << endl;
    }

    return 0;
}