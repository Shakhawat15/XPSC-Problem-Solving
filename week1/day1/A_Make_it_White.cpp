#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int firstB = s.find('B');
        int secondB = s.rfind('B');
        int result = secondB - firstB + 1;
        cout << result << endl;
    }

    return 0;
}