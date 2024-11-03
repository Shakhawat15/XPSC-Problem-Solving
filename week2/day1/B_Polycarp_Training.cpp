#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<int> contest;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        contest.insert(a);
    }

    int result = 0, problem = 1;

    while (!contest.empty())
    {
        auto lb = contest.lower_bound(problem);
        if (lb != contest.end())
        {
            result++;
            contest.erase(lb);
        }
        else
        {
            break;
        }
        problem++;
    }

    cout << result << endl;

    return 0;
}