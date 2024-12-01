#include <bits/stdc++.h>
#define ll long long
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
        vector<int> a(n), freq(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // cout << a[0] << endl;

        // freq[0] = a[0];

        ll result = 0;

        for (int i = 0; i < n - 2; i++)
        {
            result += a[i];
        }

        cout << a.back() - (a[n - 2] - result) << endl;
    }

    return 0;
}