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

        vector<pair<int, char>> freq(26);

        for (int i = 0; i < 26; i++)
        {
            freq[i].second = 'a' + i;
        }

        for (char c : s)
            freq[c - 'a'].first++;

        sort(freq.rbegin(), freq.rend());

        string result(n, ' ');
        int indx = 0;

        for (auto [cnt, ch] : freq)
        {
            if (cnt == 0)
                break;
            for (int i = 0; i < cnt; i++)
            {
                if (indx >= n)
                    indx = 1;

                result[indx] = ch;
                indx += 2;
            }
        }

        cout << result << endl;
    }

    return 0;
}