#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int> a, const pair<string, int> b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    map<string, int> chatList;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        chatList[s] = i;
    }

    vector<pair<string, int>> newChatList(chatList.begin(), chatList.end());

    sort(newChatList.begin(), newChatList.end(), cmp);

    reverse(newChatList.begin(), newChatList.end());

    for (auto [n, i] : newChatList)
    {
        cout << n << endl;
    }

    return 0;
}