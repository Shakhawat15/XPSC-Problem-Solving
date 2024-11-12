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
        vector<int> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[v[i]] == 0)
                cnt++;
            else
                break;
            mp[v[i]]++;
        }

        cout << n - cnt << endl;
    }

    return 0;
}