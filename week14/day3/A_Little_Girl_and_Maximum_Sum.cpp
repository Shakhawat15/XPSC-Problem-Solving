#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> b(n, 0);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        b[l]++;
        b[r + 1]--;
    }

    for (int i = 1; i < n; i++)
        b[i] = b[i - 1] + b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += a[i] * b[i];

    cout << ans << endl;

    return 0;
}