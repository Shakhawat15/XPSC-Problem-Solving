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
        int n, m;
        cin >> n >> m;
        if (n >= m)
        {
            if ((n % 2 != 0 && m % 2 == 0) || (n % 2 == 0 && m % 2 != 0))
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}