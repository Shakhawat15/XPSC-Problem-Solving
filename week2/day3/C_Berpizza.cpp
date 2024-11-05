#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    set<pair<int, int>> orderSet;
    multiset<pair<int, int>> moneySet;
    int orderNumber = 0;
    vector<int> customerOrder;
    while (q--)
    {
        int a, m;
        cin >> a;
        if (a == 1)
        {
            cin >> m;
            orderNumber++;
            orderSet.insert({orderNumber, m});
            moneySet.insert({m, -orderNumber});
        }
        else if (a == 3)
        {
            int pos = abs(moneySet.rbegin()->second), money = moneySet.rbegin()->first;
            customerOrder.push_back(pos);
            moneySet.erase(--moneySet.end());
            orderSet.erase({pos, money});
        }
        else
        {
            int pos = orderSet.begin()->first, money = orderSet.begin()->second;
            customerOrder.push_back(pos);
            orderSet.erase(orderSet.begin());
            moneySet.erase({money, -pos});
        }
    }

    for (int val : customerOrder)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}