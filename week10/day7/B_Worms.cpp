#include <bits/stdc++.h>

using namespace std;
const int N = 1e8;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n;
    map<int, int> mp;
    int worm, indx = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> worm;
        while (worm--)
        {
            mp[indx] = i;
            indx++;
        }
    }

    cin >> q;
    int juicy_warm;

    while (q--)
    {
        cin >> juicy_warm;
        cout << mp[juicy_warm] << endl;
    }

    return 0;
}