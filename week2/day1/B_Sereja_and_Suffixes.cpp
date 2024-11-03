#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set<int> dint;
    vector<int> distinctCount(n);

    for (int i = n - 1; i >= 0; i--)
    {
        dint.insert(v[i]);
        distinctCount[i] = dint.size();
    }

    while (m--)
    {
        int l;
        cin >> l;
        l--;
        cout << distinctCount[l] << endl;
    }

    return 0;
}