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
        map<string, vector<int>> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> points(3);
        for (auto [word, person] : mp)
        {
            if (person.size() == 1)
            {
                points[person[0]] += 3;
            }
            else if (person.size() == 2)
            {
                points[person[0]] += 1;
                points[person[1]] += 1;
            }
        }

        for (int val : points)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}