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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int minCnt = INT_MAX, cnt = 0;
        int l = 0, r = 0;
        while (r < n)
        {
            if (s[r] == 'W')
            {
                cnt++;
            }
            if (r - l + 1 == k)
            {
                minCnt = min(minCnt, cnt);
                if (s[l] == 'W')
                    cnt--;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }

        cout << minCnt << endl;
    }

    return 0;
}