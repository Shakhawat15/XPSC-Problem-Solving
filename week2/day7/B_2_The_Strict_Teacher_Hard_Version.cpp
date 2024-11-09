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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> teacher(m);
        for (int i = 0; i < m; i++)
        {
            cin >> teacher[i];
        }

        sort(teacher.begin(), teacher.end());

            while (q--)
        {
            int devidPosition;
            cin >> devidPosition;

            if (devidPosition < teacher[0])
            {
                cout << teacher[0] - 1 << endl;
                continue;
            }
            if (devidPosition > teacher[m - 1])
            {
                cout << n - teacher[m - 1] << endl;
                continue;
            }

            auto it = lower_bound(teacher.begin(), teacher.end(), devidPosition);
            auto jt = it--;
            int left = *jt, right = *it;
            int mid = (left + right) / 2;
            cout << min(abs(mid - left), abs(mid - right)) << endl;
        }
    }

    return 0;
}