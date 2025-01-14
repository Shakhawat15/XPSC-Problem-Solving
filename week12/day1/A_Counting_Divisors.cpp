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
        int cnt = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
                if (i != n / i)
                    cnt += 2;
                else
                    cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}