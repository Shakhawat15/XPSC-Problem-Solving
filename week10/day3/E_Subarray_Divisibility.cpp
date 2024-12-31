#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> mp;
    mp[0] = 1;
    ll result = 0, sum = 0, rem = 0;

    for (int val : a)
    {
        sum += val;
        rem = sum % n;
        if (rem < 0)
            rem += n;
        if (mp[rem])
        {
            result += mp[rem];
            mp[rem]++;
        }
        else
            mp[rem] = 1;
    }

    cout << result << endl;

    return 0;
}