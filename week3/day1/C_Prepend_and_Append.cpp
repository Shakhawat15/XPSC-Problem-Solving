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
        vector<char> v;
        for (char c : s)
        {
            v.push_back(c);
        }
        int l = 0, r = n - 1;

        while (l < r)
        {
            if (v[l] != v[r])
            {
                auto lit = v.begin();
                auto rit = v.end();
                v.erase(lit);
                v.erase(--rit);
                r -= 2;
            }
            else
            {
                break;
            }
        }
        cout << v.size() << endl;
    }

    return 0;
}