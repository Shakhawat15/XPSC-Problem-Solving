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
        vector<int> a;
        int x = 1, y = n * n;
        for (int i = 1; i <= n * n; i++)
        {
            if (i % 2 != 0)
            {
                a.push_back(x);
                x++;
            }
            else
            {
                a.push_back(y);
                y--;
            }
        }

        x = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                for (int j = x; j < x + n; j++)
                {
                    cout << a[j] << " ";
                }
                cout << endl;
                x += n;
            }
            else
            {
                for (int j = (x + n) - 1; j >= x; j--)
                {

                    cout << a[j] << " ";
                }
                cout << endl;
                x += n;
            }
        }
    }
    return 0;
}