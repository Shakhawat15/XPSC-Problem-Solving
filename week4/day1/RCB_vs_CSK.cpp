#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int diff = x - y;

    if (diff >= 18)
        cout << "RCB" << endl;
    else
        cout << "CSK" << endl;

    return 0;
}