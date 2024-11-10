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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int diff1 = v[n - 3] - v[0];
        int diff2 = v[n - 2] - v[1];
        int diff3 = v[n - 1] - v[2];

        int minimumDiff = min(diff1, diff2);
        minimumDiff = min(minimumDiff, diff3);

        cout << minimumDiff << endl;
    }

    return 0;
}