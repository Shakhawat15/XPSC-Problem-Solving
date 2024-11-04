#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        priority_queue<int> pq;

        for (auto [x, y] : mp)
        {
            pq.push(y);
        }

        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }

            int first = pq.top();
            pq.pop();

            int second = pq.top();
            pq.pop();

            first--;
            second--;

            if (first > 0)
                pq.push(first);

            if (second > 0)
                pq.push(second);
        }

        int result = 0;
        while (!pq.empty())
        {
            result += pq.top();
            pq.pop();
        }

        cout << result << endl;
    }

    return 0;
}