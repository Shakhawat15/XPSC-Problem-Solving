#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 5;

int cnt[N];
int num = 0;
int k;

void add(int x)
{
    cnt[x]++;
    if (cnt[x] == 1)
        num++;
}

void remove(int x)
{
    cnt[x]--;
    if (cnt[x] == 0)
        num--;
}

bool good()
{
    return num <= k;
}

int main()
{
    int n;
    cin >> n >> k;
    vector<int> a(n);
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
            remove(a[l]);
            l++;
        }
        result += r - l + 1;
    }

    cout << result << endl;

    return 0;
}