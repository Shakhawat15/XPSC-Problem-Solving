#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int serejaPoint = 0, dimaPoint = 0;

    int left = 0, right = n - 1;

    while (left < right)
    {
        if (v[left] > v[right])
        {
            serejaPoint += v[left];
            left++;
        }
        else
        {
            serejaPoint += v[right];
            right--;
        }

        if (v[left] > v[right])
        {
            dimaPoint += v[left];
            left++;
        }
        else
        {
            dimaPoint += v[right];
            right--;
        }
    }

    if (n % 2 != 0)
    {
        serejaPoint += v[left];
    }

    cout << serejaPoint << " " << dimaPoint << endl;

    return 0;
}