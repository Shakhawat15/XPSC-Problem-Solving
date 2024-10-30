#include <bits/stdc++.h>

using namespace std;

int main()
{
    int second, biscuit, time;
    cin >> second >> biscuit >> time;
    int totalBiscuit = 0, secondCount = second;
    while (secondCount <= time)
    {
        totalBiscuit += biscuit;
        secondCount += second;
    }

    cout << totalBiscuit;

    return 0;
}