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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        multiset<int> greenIndx;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
                greenIndx.insert(i);
        }

        int minimumTime = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                auto it = greenIndx.lower_bound(i);

                int currentTime;
                if (it != greenIndx.end())
                {
                    currentTime = *it - i;
                }
                else
                {
                    currentTime = (n - i) + *greenIndx.begin();
                }
                minimumTime = max(currentTime, minimumTime);
            }
        }
        cout << minimumTime << endl;
    }

    return 0;
}