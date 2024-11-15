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
        vector<int> a[n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                a[i].push_back(x);
            }
        }

        vector<int> ans;

        if (a[0][0] != a[1][0] && a[0][0] != a[2][0])
        {
            ans.push_back(a[1][0]);
            for (int val : a[0])
                ans.push_back(val);
        }
        else
        {
            ans.push_back(a[0][0]);
            for (int i = 0; i < n; i++)
            {
                if (a[0][0] != a[i][0])
                {
                    for (int val : a[i])
                        ans.push_back(val);
                }
            }
        }

        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}