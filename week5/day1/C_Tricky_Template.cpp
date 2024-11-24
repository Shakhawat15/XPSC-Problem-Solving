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
        string a, b, c;
        cin >> n;
        cin >> a;
        cin >> b;
        cin >> c;

        string result = "NO";
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                result = "YES";
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}