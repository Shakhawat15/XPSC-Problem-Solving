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
        vector<int> a(n);
        int totalVal = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            totalVal ^= a[i];
        }

        int result = totalVal;

        for (int val : a)
        {
            result = min(result, totalVal ^ val);
        }

        cout << result << endl;
    }

    return 0;
}