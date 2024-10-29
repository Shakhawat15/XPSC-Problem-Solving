#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int coin = 0;

    coin += max(a, b);

    if (a > b)
        a--;
    else
        b--;

    coin += max(a, b);

    cout << coin << endl;

    return 0;
}