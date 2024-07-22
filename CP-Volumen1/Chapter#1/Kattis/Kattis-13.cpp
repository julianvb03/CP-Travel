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
/*
void substring(char* x, const char* y, int initial, int fin) {
    printf("%d %d\n", initial, fin);
    if(initial == 0) {
	for(int i = initial; i < fin; i++) {
	    x[i] = y[i];
	}
	x[fin] = '\0';
    }
    else{
	for(int i = 1; i < initial - fin; i++) {
	    x[initial + 1] = y[initial + 1];
	}
	x[fin+1] = '\0';
    }
}

int main() {
    int c;
    char s[12], a[6], b[6];
    scanf("%d", &c);
    while(c--) {
	scanf("%11s", s);
	if(strcmp(s, "P=NP") == 0)
	    printf("skipped");

	int p = strchr(s, '+') - s;
	printf("1 %d\n", p);
	substring(a, s, p, strlen(s));
	printf("2\n");
	printf("%s\n", a);
    }
}
*/

int main() {
    string s;
    int t, a, b;
    cin >> t;
    while(t--) {
	cin >> s;
	if(s == "P=NP")
	    cout << "skipped\n";
	else {
	    a = stoi(s.substr(0, s.find("+")));
	    b = stoi(s.substr(s.find("+"), s.length() - 1));
	    cout << a + b << "\n";
	}
    }
}
