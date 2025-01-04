#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        ll result = 0;

        for (int i = 0; i < n; i++)
        {
            int indx1 = lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
            int indx2 = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin();
            result += indx2 - indx1;
        }
        cout << result << endl;
    }

    return 0;
}