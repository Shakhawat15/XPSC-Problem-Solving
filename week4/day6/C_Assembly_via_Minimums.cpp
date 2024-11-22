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
        int pairCount = n * (n - 1) / 2;
        vector<int> a(pairCount);
        for (int i = 0; i < pairCount; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int> result;

        int i = 0, k = n - 1;

        for (int i = 0; i < a.size();)
        {
            result.push_back(a[i]);
            i += k;
            k--;
        }

        for (int val : result)
            cout << val << " ";
        cout << 1000000000 << endl;
    }

    return 0;
}