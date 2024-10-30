#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        if (v.empty())
        {
            v.push_back(s);
            mp[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            auto it = find(v.begin(), v.end(), s);
            if (it != v.end())
            {
                string ns = s + to_string(mp[s]);
                v.push_back(ns);
                mp[s] += 1;
                cout << ns << endl;
            }
            else
            {
                v.push_back(s);
                mp[s] = 1;
                cout << "OK" << endl;
            }
        }
    }

    return 0;
}