#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }
    ll sum = 0, result = 0;
    for (auto [x, y] : mp)
    {
        sum += y;
        result = max(result, sum);
    }

    cout << result << endl;

    return 0;
}