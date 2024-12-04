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
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int maxFreq = 0;
        for (auto i : freq)
        {
            maxFreq = max(maxFreq, i.second);
        }

        int ans = 0;

        while (maxFreq < n)
        {
            int remaining = n - maxFreq;
            int canAdd = maxFreq;
            ans++;
            ans += min(canAdd, remaining);
            maxFreq += min(canAdd, remaining);
        }

        cout << ans << endl;
    }

    return 0;
}