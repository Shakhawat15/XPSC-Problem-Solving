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
        string s;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> s;

        vector<ll> freq(n);

        freq[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            freq[i] = a[i] + freq[i - 1];
        }

        ll sum = 0;

        int l = 0, r = n - 1;

        while (l < r)
        {
            if (s[l] == 'L' && s[r] == 'R')
            {
                if (l - 1 < 0)
                    sum += freq[r];
                else
                    sum += freq[r] - freq[l - 1];
                l++;
                r--;
            }
            if (s[l] != 'L')
                l++;
            if (s[r] != 'R')
                r--;
        }

        cout << sum << endl;
    }

    return 0;
}