#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int diffChar = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
            diffChar++;
    }

    cout << diffChar << endl;

    return 0;
}