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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ss, pp;
        ss = pp = 0;
        int si = 0;
        int pi = -1;
        int indx = 0;
        for (auto &&i : s)
        {
            if (i == 's')
            {
                ss++;
                si = indx;
            }
            if (i == 'p')
            {
                pp++;
                if (pi == -1)
                {
                    pi = indx;
                }
            }
            indx++;
        }
        if (ss == 0 || pp == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (si == 0 || pi == n - 1)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }

    return 0;
}