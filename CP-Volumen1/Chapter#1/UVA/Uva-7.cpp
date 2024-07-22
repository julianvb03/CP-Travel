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
    int t;
    int c = 0;
    scanf("%d", &t);
    while(t--) {
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if(x >20 || y > 20 || z >  20)
	    printf("Case %d: bad\n", ++c);
	else
	    printf("Case %d: good\n", ++c);
    }

}
