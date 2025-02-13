#include <bits/stdc++.h>
using namespace std;

int getScore(int x, int y) {
    if(x < y) swap(x, y);
    if(x == 2 && y == 1) return 1000;
    if(x == y) return x == 6 ? 800 : x * 100 + y;
    return x * 10 + y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (true) {
        int p1 {}, p2 {}, s1 {}, s2{}, pt1 {}, pt2 {};
        cin >> p1 >> p2 >> s1 >> s2;
        if(p1 == 0 || s1 == 0) break;

        pt1 = getScore(p1, p2);
        pt2 = getScore(s1, s2);

        if(pt1 == pt2)      cout << "Tie.\n";
        else if(pt1 > pt2)  cout << "Player 1 wins.\n";
        else                cout << "Player 2 wins.\n";
    }
    return 0;
}