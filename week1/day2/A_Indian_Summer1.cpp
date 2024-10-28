#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    sort(v.begin(), v.end());

    auto new_end = unique(v.begin(), v.end());

    v.erase(new_end, v.end());

    cout << v.size();

    return 0;
}