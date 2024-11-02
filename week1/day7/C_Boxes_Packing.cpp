#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> box(n);

    for (int i = 0; i < n; i++)
    {
        cin >> box[i];
    }

    map<int, int> mp;

    for (int b : box)
    {
        mp[b]++;
    }

    int viBox = 0;

    for (auto [x, y] : mp)
    {
        viBox = max(viBox, y);
    }

    cout << viBox << endl;

    return 0;
}