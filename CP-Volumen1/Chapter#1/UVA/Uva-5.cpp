#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    int x {};
    scanf("%d", &x);
    while(x--) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%c\n", a == b ? '=' : a > b ? '>' : '<');
    }
}
