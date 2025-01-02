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
        int key, l = 0, r = n - 1, mid;
        cin >> key;
        string found = "NO";
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key == a[mid])
            {
                found = "YES";
                break;
            }
            else if (key < a[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << found << endl;
    }

    return 0;
}