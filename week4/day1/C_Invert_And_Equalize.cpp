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

        int zeroCnt = 0, oneCnt = 0, i = 0;

        while (i < n)
        {
            if (s[i] == '0')
            {
                zeroCnt++;
                while (i < n && s[i] == '0')
                {
                    i++;
                }
            }
            else
            {
                oneCnt++;
                while (i < n && s[i] == '1')
                {
                    i++;
                }
            }
        }

        cout << min(oneCnt, zeroCnt) << endl;
    }

    return 0;
}