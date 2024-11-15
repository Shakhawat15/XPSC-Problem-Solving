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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long sum = 0, operation = 0;
        bool isNegative = false;

        for (int i = 0; i <= n; i++)
        {
            if (i < n)
                sum += abs(a[i]);

            if (isNegative)
            {
                if (i == n || a[i] > 0)
                {
                    operation++;
                    isNegative = false;
                }
            }
            else
            {
                if (a[i] < 0)
                    isNegative = true;
            }
        }

        cout << sum << " " << operation << endl;
    }

    return 0;
}