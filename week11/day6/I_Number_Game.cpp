#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool Possible(vector<int> a, int n, int k)
{
    multiset<int> s;
    for (auto i : a)
    {
        s.insert(i);
    }

    for (int i = 1; i <= k; i++)
    {
        if (s.empty())
            return false;
        int req = k - i + 1;
        auto it = s.upper_bound(req);
        if (it == s.begin())
            return false;
        it--;

        s.erase(it);
        if (!s.empty())
        {
            it = s.begin();
            ll v = (*it);
            v += (req);
            s.erase(it);
            s.insert(v);
        }
    }
    return true;
}

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

        int l = 0, r = n, result = 0, mid;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (Possible(a, n, mid))
            {
                result = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        cout << result << endl;
    }

    return 0;
}