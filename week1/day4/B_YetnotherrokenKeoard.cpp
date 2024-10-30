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
        string s;
        cin >> s;
        string ns = "";
        deque<pair<char, int>> upper, lower;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B')
            {
                if (!upper.empty())
                    upper.pop_back();
            }
            else if (s[i] == 'b')
            {
                if (!lower.empty())
                    lower.pop_back();
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                upper.push_back({s[i], i});
            }
            else
            {
                lower.push_back({s[i], i});
            }
        }

        vector<pair<int, char>> ans;
        for (auto [v, i] : upper)
        {
            ans.push_back({i, v});
        }
        for (auto [v, i] : lower)
        {
            ans.push_back({i, v});
        }

        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].second;
        }
        cout << endl;
    }

    return 0;
}