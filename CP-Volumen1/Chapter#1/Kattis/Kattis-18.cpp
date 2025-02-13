#include <bits/stdc++.h>
using namespace std;


/*
this solution is much better
int transform(int n) {
    int first, second, third;
    first = n % 10;
    second = (n / 10) % 10;
    third = n / 100;
    return first * 100 + second * 10 + third;
}
*/

int max_n(int x, int y) {
    if(x == y)              return -1;
    while(x > 9) {
      if(x % 10 > y % 10)   return 1;
      if(y % 10 > x % 10)   return 0;
      x /= 10, y /= 10;
    }

    return x > y ? 1 : 0;
}

string reverse_n(int a) {
    string rn {};
    char temp[12];
    while (a > 9) {
        snprintf((temp), sizeof(temp), "%d", a%10);
        rn.push_back(*temp);
        a /= 10;
    }
    snprintf((temp), sizeof(temp), "%d", a%10);
    rn.push_back(*temp);
    return rn;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a {}, b {};
    cin >> a >> b;
    cout << (max_n(a, b) > 0 ? reverse_n(a) : reverse_n(b));
    return 0;
}