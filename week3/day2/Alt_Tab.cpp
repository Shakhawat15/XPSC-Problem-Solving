#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s] = i;
    }

    vector<pair<int, string>> v;

    for (auto [x, y] : mp)
    {
        v.push_back({y, x});
    }

    sort(v.begin(), v.end(), greater<pair<int, string>>());

    for (auto [x, y] : v)
    {
        int size = y.size();
        cout << y[size - 2] << y[size - 1];
    }

    return 0;
}