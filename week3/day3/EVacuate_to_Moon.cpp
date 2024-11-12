#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<ll> capacity(n), outlet(m);

        for (int i = 0; i < n; i++)
        {
            cin >> capacity[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> outlet[i];
        }

        sort(capacity.begin(), capacity.end(), greater<ll>());
        sort(outlet.begin(), outlet.end(), greater<ll>());

        ll totalEnergy = 0;

        for (int i = 0; i < min(n, m); i++)
        {
            totalEnergy += min(capacity[i], (h * outlet[i]));
        }

        cout << totalEnergy << endl;
    }

    return 0;
}