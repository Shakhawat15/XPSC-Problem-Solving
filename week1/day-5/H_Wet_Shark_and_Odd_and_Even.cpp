#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.rbegin(), v.rend());

    long long int sum = 0;
    int smallOdd = INT_MAX;
    for (int val : v)
    {
        sum += val;
        if (val % 2 != 0)
            smallOdd = val;
    }

    if (sum % 2 == 0)
        cout << sum << endl;
    else
        cout << sum - smallOdd << endl;

    return 0;
}