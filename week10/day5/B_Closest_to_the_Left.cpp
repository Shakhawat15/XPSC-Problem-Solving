#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++)
    {
        int key, l = 0, r = n - 1, result = 0, mid;
        cin >> key;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key >= a[mid])
            {
                result = mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << result << endl;
    }

    return 0;
}