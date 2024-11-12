#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> b(m);

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for (int i = 0; i < m; i++)
        cin >> b[i];

    long long cnt = 0;

    for (int i = 0; i < m; i++)
        cnt += 1LL * mp[b[i]];

    cout << cnt << endl;

    return 0;
}