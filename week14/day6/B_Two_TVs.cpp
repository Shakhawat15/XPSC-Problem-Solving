#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> d;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    ll sum = 0;
    string result = "YES";
    for (auto it = d.begin(); it != d.end(); ++it)
    {
        sum += it->second;
        if (sum > 2)
        {
            result = "NO";
            break;
        }
    }

    cout << result << endl;

    return 0;
}