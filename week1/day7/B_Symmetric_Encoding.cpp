#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> uniqueChar(s.begin(), s.end());
        string newString(uniqueChar.begin(), uniqueChar.end());

        sort(newString.begin(), newString.end());

        map<char, char> mp;
        int length = newString.length() - 1;
        for (int i = 0; i <= length; i++)
        {
            mp[newString[i]] = newString[length - i];
        }

        string decoded;
        for (char ch : s)
        {
            decoded += mp[ch];
        }

        cout << decoded << endl;
    }

    return 0;
}
