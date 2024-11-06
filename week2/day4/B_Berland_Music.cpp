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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;

        vector<pair<int, int>> liked, disliked;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                disliked.push_back({v[i], i});
            }
            else
            {
                liked.push_back({v[i], i});
            }
        }

        sort(liked.begin(), liked.end());
        sort(disliked.begin(), disliked.end());

        vector<int> finalRating(n);
        int currentRating = 1;

        for (auto [x, y] : disliked)
        {
            finalRating[y] = currentRating++;
        }

        for (auto [x, y] : liked)
        {
            finalRating[y] = currentRating++;
        }

        for (int rating : finalRating)
        {
            cout << rating << " ";
        }
        cout << endl;
    }

    return 0;
}