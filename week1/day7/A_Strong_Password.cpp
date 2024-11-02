#include <bits/stdc++.h>
using namespace std;

int calculateTypingTime(const string str)
{
    int time = 2;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
        {
            time += 1;
        }
        else
        {
            time += 2;
        }
    }
    return time;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int maxTime = 0;
        string bestPassword;

        for (int i = 0; i < s.length(); i++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                string newPassword = s;
                newPassword.insert(newPassword.begin() + i, c);

                int time = calculateTypingTime(newPassword);
                if (time > maxTime)
                {
                    maxTime = time;
                    bestPassword = newPassword;
                }
            }
        }

        cout << bestPassword << endl;
    }

    return 0;
}
