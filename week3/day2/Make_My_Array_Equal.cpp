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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
                mp[x]++;
        }

        if (mp.size() < 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}