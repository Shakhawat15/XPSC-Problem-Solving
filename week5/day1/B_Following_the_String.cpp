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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        string s = "abcdefghijklmnopqrstuvwxyz";

        map<char, int> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]] = 0;
        }

        string result = "";

        for (int i = 0; i < n; i++)
        {
            for (auto it : mp)
            {
                if (it.second == a[i])
                {
                    result += it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}