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
        map<char, int> s1, s2;

        for (int i = 0; i < a.size(); i++)
            s1[a[i]]++;

        for (int i = 0; i < b.size(); i++)
            s2[b[i]]++;

        int lastIndx1 = a.size() - 1;
        int lastIndx2 = b.size() - 1;

        if (a[lastIndx1] == 'S' && b[lastIndx2] == 'S')
        {
            if (s1['X'] == s2['X'])
                cout << '=' << endl;
            else if (s1['X'] > s2['X'])
                cout << '<' << endl;
            else
                cout << '>' << endl;
        }
        else if (a[lastIndx1] == 'L' && b[lastIndx2] == 'L')
        {
            if (s1['X'] == s2['X'])
                cout << '=' << endl;
            else if (s1['X'] > s2['X'])
                cout << '>' << endl;
            else
                cout << '<' << endl;
        }
        else if (a[lastIndx1] == 'M' && b[lastIndx2] == 'M')
        {
            cout << '=' << endl;
        }
        else if ((a[lastIndx1] == 'S' && b[lastIndx2] == 'M') || (a[lastIndx1] == 'S' && b[lastIndx2] == 'L'))
        {
            cout << '<' << endl;
        }
        else if ((a[lastIndx1] == 'L' && b[lastIndx2] == 'M') || (a[lastIndx1] == 'L' && b[lastIndx2] == 'S'))
        {
            cout << '>' << endl;
        }
        else if (a[lastIndx1] == 'M' && b[lastIndx2] == 'S')
        {
            cout << '>' << endl;
        }
        else if (a[lastIndx1] == 'M' && b[lastIndx2] == 'L')
        {
            cout << '<' << endl;
        }
    }

    return 0;
}