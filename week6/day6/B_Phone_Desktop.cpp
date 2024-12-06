#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int totalCellX = x + y * 4;
        int totalCellY = y * 4;
        int screenNeedX = ceil(totalCellX / 15.0);
        int screenNeedY = ceil(totalCellY / 8.0);
        cout << max(screenNeedX, screenNeedY) << endl;
    }

    return 0;
}