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
        long long int totalPower = 0;
        priority_queue<int> bounch;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
                bounch.push(v[i]);
            else
            {
                if (!bounch.empty())
                {
                    totalPower += bounch.top();
                    bounch.pop();
                }
            }
        }
        cout << totalPower << endl;
    }

    return 0;
}