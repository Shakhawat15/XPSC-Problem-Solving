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
        for (int i = 0; i < n; i++)
        {
            int b;
            string s;
            cin >> b >> s;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == 'U')
                {
                    if (v[i] == 0)
                    {
                        v[i] = 9;
                    }
                    else
                    {
                        v[i]--;
                    }
                }
                else
                {
                    if (v[i] == 9)
                    {
                        v[i] = 0;
                    }
                    else
                    {
                        v[i]++;
                    }
                }
            }
        }
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}