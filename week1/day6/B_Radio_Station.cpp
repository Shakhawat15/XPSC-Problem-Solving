#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> names;
    vector<pair<string, string>> commands;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        names[ip] = name;
    }
    for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;
        commands.push_back({command, ip});
    }

    for (auto [command, ip] : commands)
    {
        ip.pop_back();
        cout << command << " " << ip << "; #" << names[ip] << endl;
    }

    return 0;
}