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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> a1, a2;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                a1.push_back(a[i]);
            else
                a2.push_back(a[i]);
        }

        ll g1 = a1[0], g2 = a2[0];

        for (int i = 1; i < a1.size(); i++)
        {
            g1 = __gcd(g1, a1[i]);
        }

        for (int i = 1; i < a2.size(); i++)
        {
            g2 = __gcd(g2, a2[i]);
        }

        bool isG1Possible = true, isG2Possible = true;

        for (int i = 0; i < a2.size(); i++)
        {
            if (a2[i] % g1 == 0)
            {
                isG1Possible = 0;
                break;
            }
        }

        if (!isG1Possible)
        {
            for (int i = 0; i < a1.size(); i++)
            {
                if (a1[i] % g2 == 0)
                {
                    isG2Possible = 0;
                    break;
                }
            }
        }

        if (isG1Possible)
            cout << g1 << endl;
        else if (isG2Possible)
            cout << g2 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}