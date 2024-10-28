#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        dq.push_back(a);
    }

    int serejaPoint = 0, dimaPoint = 0;

    while (!dq.empty())
    {
        if (dq.front() > dq.back())
        {
            serejaPoint += dq.front();
            dq.pop_front();
        }
        else
        {
            serejaPoint += dq.back();
            dq.pop_back();
        }
        if (dq.size() != 0)
        {
            if (dq.front() > dq.back())
            {
                dimaPoint += dq.front();
                dq.pop_front();
            }
            else
            {
                dimaPoint += dq.back();
                dq.pop_back();
            }
        }
    }

    cout << serejaPoint << " " << dimaPoint << endl;

    return 0;
}