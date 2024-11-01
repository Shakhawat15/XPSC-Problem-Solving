#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> peoples(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> peoples[i];
    }

    for (int i = 0; i < n; i++)
    {
        auto it = find(peoples.begin(), peoples.end(), peoples[i]);
        int pos = it - peoples.begin();
        if (i == pos)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}