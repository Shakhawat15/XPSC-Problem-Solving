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
        int n = s.length();
        if (s == "()")
        {
            cout << "NO" << endl;
            continue;
        }

        int i = 0;
        bool check = false;
        while (i < n - 1)
        {
            if (s.substr(i, 2) == ")(")
            {
                check = true;
                break;
            }
            i++;
        }

        string result = "";
        if (check)
        {
            for (int i = 0; i < n; i++)
            {
                result += "(";
            }
            for (int i = 0; i < n; i++)
            {
                result += ")";
            }
            cout << "YES" << endl;
            cout << result << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                result += "()";
            }
            if (result == s)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << result << endl;
            }
        }
    }

    return 0;
}