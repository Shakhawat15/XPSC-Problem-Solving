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
        string s, decoded = "";
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n && s[i + 2] == '0' && (i + 3 >= n || s[i + 3] != '0'))
            {
                int asciiNumber = ((s[i] - '0') * 10) + (s[i + 1] - '0');
                decoded.push_back((char)(96 + asciiNumber));
                i += 2;
            }
            else
            {
                int asciiNumber = (s[i] - '0');
                decoded.push_back((char)(96 + asciiNumber));
            }
        }

        cout << decoded << endl;
    }

    return 0;
}