#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll useTools = 0;

        for (int i = 0; i < n; i++)
        {
            useTools += min(v[i], a - 1);
        }

        ll maxTime = b + useTools;

        cout << maxTime << endl;
    }

    return 0;
}