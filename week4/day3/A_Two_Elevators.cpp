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
        int a, b, c;
        cin >> a >> b >> c;

        int lift1 = abs(a - 1);
        int lift2 = abs(c - b) + abs(c - 1);

        if (lift1 > lift2)
            cout << 2 << endl;
        else if (lift1 < lift2)
            cout << 1 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}