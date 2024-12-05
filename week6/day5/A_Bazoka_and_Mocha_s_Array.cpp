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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> doubled(a.begin(), a.end());
        doubled.insert(doubled.end(), a.begin(), a.end());

        bool possible = false;
        for (int i = 0; i < n; i++)
        {
            vector<int> subarray(doubled.begin() + i, doubled.begin() + i + n);
            if (is_sorted(subarray.begin(), subarray.end()))
            {
                possible = true;
                break;
            }
        }

        if (possible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
