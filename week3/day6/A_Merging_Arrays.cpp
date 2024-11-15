#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int u = 0, d = 0;
    while (u < n || d < m)
    {
        if (d == m || (u < n && a[u] < b[d]))
        {
            c.push_back(a[u]);
            u++;
        }
        else
        {
            c.push_back(b[d]);
            d++;
        }
    }

    for (int val : c)
        cout << val << " ";
    cout << endl;

    return 0;
}