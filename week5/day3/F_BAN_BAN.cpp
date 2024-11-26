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

        int cnt = 0;
        vector<pair<int, int>> indx;
        int l = 1, r = n * 3;
        while (l < r)
        {
            cnt++;
            indx.push_back({l + 1, r});
            l += 3;
            r -= 3;
        }

        cout << cnt << endl;
        for (auto [x, y] : indx)
        {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}