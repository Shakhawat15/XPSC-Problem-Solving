#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto itl = lower_bound(a.begin(), a.end(), l);
        auto itr = upper_bound(a.begin(), a.end(), r);
        cout << itr - itl << " ";
    }

    return 0;
}