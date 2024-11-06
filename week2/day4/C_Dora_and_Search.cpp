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

        bool found = false;
        int l = 0, r = n - 1;

        set<int> st(v.begin(), v.end());

        int min = *st.begin();
        int max = *st.end();

        while (l < r)
        {

            // cout << max << " " << min << endl;

            if ((v[l] != max && v[l] != min) && (v[r] != max && v[r] != min))
            {
                cout << l + 1 << " " << r + 1 << endl;
                found = true;
                break;
            }

            if (v[l] == max)
            {
                l++;
                max--;
            }
            else if (v[l] == min)
            {
                l++;
                min++;
            }

            if (v[r] == max)
            {
                r--;
                max--;
            }
            else if (v[r] == min)
            {
                r--;
                min++;
            }
        }

        if (!found)
            cout << -1 << endl;
    }

    return 0;
}