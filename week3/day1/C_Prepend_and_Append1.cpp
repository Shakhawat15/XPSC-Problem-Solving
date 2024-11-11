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
        int l = 0, r = n - 1;
        int addedString = 0;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                addedString += 2;
                l++;
                r--;
            }
            else
            {
                break;
            }
        }
        cout << s.size() - addedString << endl;
    }

    return 0;
}