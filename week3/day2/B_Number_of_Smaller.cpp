#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int d = 0, u = 0;

    int count = 0;
    while (d < m)
    {
        if (u < n && b[d] > a[u])
        {
            count++;
            u++;
        }
        else
        {
            cout << count << " ";
            d++;
        }
    }

    return 0;
}