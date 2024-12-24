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
        deque<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        while (a.size() > 1)
        {
            if (a.size() > 1)
                a.pop_front();

            if (a.size() > 1)
                a.pop_back();
        }

        cout << a[0] << endl;
    }

    return 0;
}