#include <bits/stdc++.h>
#define ll long long
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        reverse(a.begin(), a.end());

        while (!a.empty() && a.back() == 0)
        {
            a.pop_back();
        }

        if (a.empty())
        {
            cout << 0 << endl;
            continue;
        }

        ll result = 0;
        reverse(a.begin(), a.end());
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] == 0)
                result++;
            else
                result += a[i];
        }

        cout << result << endl;
    }

    return 0;
}