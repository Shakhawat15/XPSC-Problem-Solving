#include <bits/stdc++.h>

using namespace std;

int main()
{
    int win, draw, loss;
    cin >> win >> draw >> loss;

    int remainingGame = 4 - (win + draw + loss);
    float myTeamPoin = win + (draw / 2.0);
    float opsitTeamPoin = loss + (draw / 2.0);

    if (remainingGame)
        myTeamPoin += remainingGame;

    if (myTeamPoin > opsitTeamPoin)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}