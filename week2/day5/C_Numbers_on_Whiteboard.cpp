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

        priority_queue<int> pq;
        for (int i = 1; i <= n; i++)
        {
            pq.push(i);
        }

        vector<pair<int, int>> result;

        for (int i = 1; i < n; i++)
        {
            int b = pq.top();
            pq.pop();
            int a = pq.top();
            pq.pop();

            int newNumber = ceil((a + b) / 2.0);
            result.push_back({a, b});
            pq.push(newNumber);
        }

        cout << pq.top() << endl;
        for (auto [a, b] : result)
        {
            cout << a << " " << b << endl;
        }
    }

    return 0;
}
