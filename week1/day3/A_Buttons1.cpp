#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int coin = 0;

    for (int i = 0; i < 2; i++)
    {
        if (a > b)
        {
            coin += a;
            a--;
        }
        else
        {
            coin += b;
            b--;
        }
    }

    cout << coin << endl;

    return 0;
}