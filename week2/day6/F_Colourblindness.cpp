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
        string a, b;
        cin >> a;
        cin >> b;
        string result = "YES";

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if ((a[i] != 'B' || b[i] != 'G'))
                {
                    if (b[i] != 'B' || a[i] != 'G')
                    {
                        result = "NO";
                        break;
                    }
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}