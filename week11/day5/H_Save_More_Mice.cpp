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
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        ll total = 0, catPosition = 0;
        for (int i = 0; i < k; i++)
        {
            if (catPosition < a[i])
            {
                catPosition += (n - a[i]);
                total++;
            }
            else
                break;
        }

        cout << total << endl;
    }

    return 0;
}