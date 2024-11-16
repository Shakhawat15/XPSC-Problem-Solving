#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    ll maxSum = 0, sum;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = a[i][j];
            x = j - 1;
            y = j + 1;
            for (int k = i - 1; k >= 0; k--)
            {
                if (x >= 0)
                {
                    sum += a[k][x];
                    x--;
                }
                if (y < m)
                {
                    sum += a[k][y];
                    y++;
                }
            }
            x = j - 1;
            y = j + 1;
            for (int k = i + 1; k < n; k++)
            {
                if (x >= 0)
                {
                    sum += a[k][x];
                    x--;
                }
                if (y < m)
                {
                    sum += a[k][y];
                    y++;
                }
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
