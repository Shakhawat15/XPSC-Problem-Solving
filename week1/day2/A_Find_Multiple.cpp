#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int findNumber = -1;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            findNumber = i;
            break;
        }
    }

    cout << findNumber << endl;

    return 0;
}