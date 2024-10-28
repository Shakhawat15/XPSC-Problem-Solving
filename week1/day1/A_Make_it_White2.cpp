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
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            char s;
            cin >> s;
            v.push_back(s);
        }

        auto leftB = find(v.begin(), v.end(), 'B') - v.begin();
        auto rightB = abs(find(v.rbegin(), v.rend(), 'B') - v.rend());

        int minLength = rightB - leftB;

        cout << minLength << endl;
    }

    return 0;
}