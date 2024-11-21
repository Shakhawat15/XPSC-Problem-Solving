#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct stack
{
    vector<ll> s, mins = {LLONG_MAX}, maxs = {LLONG_MIN};

    void push(ll x)
    {
        s.push_back(x);
        mins.push_back(::min(mins.back(), x));
        maxs.push_back(::max(maxs.back(), x));
    }

    ll pop()
    {
        ll res = s.back();
        s.pop_back();
        mins.pop_back();
        maxs.pop_back();
        return res;
    }

    bool empty()
    {
        return s.empty();
    }

    ll min()
    {
        return mins.back();
    }

    ll max()
    {
        return maxs.back();
    }
};

::stack s1, s2;

void add(ll x)
{
    s2.push(x);
}

void remove()
{
    if (s1.empty())
    {
        while (!s2.empty())
        {
            s1.push(s2.pop());
        }
    }
    s1.pop();
}

ll k;

bool good()
{
    ll mn = min(s1.min(), s2.min());
    ll mx = max(s1.max(), s2.max());
    return mx - mn <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    ll result = 0;

    for (int r = 0; r < n; r++)
    {
        add(a[r]);
        while (!good())
        {
            remove();
            l++;
        }
        result += r - l + 1;
    }

    cout << result << endl;

    return 0;
}