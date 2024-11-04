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
        int n, q;
        cin >> n >> q;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        while (q--)
        {
            int a, b;
            cin >> a >> b;
            string result = "NO";

            if (mp.find(a) != mp.end() && mp.find(b) != mp.end())
            {
                int first = *mp[a].begin();
                int second = *mp[b].rbegin();

                if (second > first)
                {
                    result = "YES";
                }
            }

            cout << result << endl;
        }
    }

    return 0;
}