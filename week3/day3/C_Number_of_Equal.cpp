#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    long long result = 0;
    int u = 0, d = 0;

    while (u < n && d < m)
    {
        int cur = a[u], cnt1 = 0, cnt2 = 0;
        while (u < n && a[u] == cur)
        {
            u++;
            cnt1++;
        }
        while (d < m && cur > b[d])
        {
            d++;
        }

        while (d < m && b[d] == cur)
        {
            d++;
            cnt2++;
        }
        result += (1LL * cnt1 * cnt2);
    }

    cout << result << endl;

    return 0;
}