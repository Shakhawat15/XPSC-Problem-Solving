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
        int n, zero = 0, nonZero = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                zero++;
            else
                nonZero++;
        }

        int result;
        if (zero == 0)
            result = 0;
        else
        {
            if (nonZero >= zero - 1)
                result = 0;
            else
            {
                int mx = *max_element(a.begin(), a.end());
                if (mx == 1)
                    result = 2;
                else
                    result = 1;
            }
        }
        cout << result << endl;
    }

    return 0;
}