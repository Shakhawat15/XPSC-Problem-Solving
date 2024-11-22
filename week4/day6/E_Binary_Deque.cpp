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
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum < s)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> nextOne(n + 1, n);
        int last = n;
        for (int i = n - 1; i >= 0; i--)
        {
            nextOne[i] = last;
            if (a[i] == 1)
                last = i;
        }

        int currentVal = 0, l = 0, result = INT_MAX;

        queue<int> q;

        for (int i = 0; i < n; i++)
        {
            q.push(a[i]);
            currentVal += a[i];
            while (!q.empty() and currentVal > s)
            {
                currentVal -= q.front();
                q.pop();
                l++;
            }
            if (currentVal == s)
                result = min(result, l + (n - nextOne[i]));
        }

        cout << result << endl;
    }

    return 0;
}