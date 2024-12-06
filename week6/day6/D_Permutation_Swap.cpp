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
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int result = 0;

        for (int i = 1; i <= n; i++)
        {
            result = __gcd(result, abs(a[i] - i));
        }

        cout << result << endl;
    }

    return 0;
}