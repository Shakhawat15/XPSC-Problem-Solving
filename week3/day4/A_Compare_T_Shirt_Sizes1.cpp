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
        string a, b;
        cin >> a >> b;

        char t1 = a.back();
        char t2 = b.back();
        int Xcount1 = count(a.begin(), a.end(), 'X');
        int Xcount2 = count(b.begin(), b.end(), 'X');

        if (t1 == t2)
        {
            if (Xcount1 == Xcount2)
                cout << '=' << endl;
            else if ((t1 == 'S' && Xcount1 > Xcount2) || (t1 == 'L' && Xcount1 < Xcount2))
                cout << '<' << endl;
            else
                cout << '>' << endl;
        }
        else
        {
            if (t1 == 'S' || (t1 == 'M' && t2 == 'L'))
                cout << '<' << endl;
            else
                cout << '>' << endl;
        }
    }

    return 0;
}