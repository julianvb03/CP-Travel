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
int main() {
    string n, d1, d2;
    int c, t;
    cin >> t;
    while(t--){
	cin >> n >> d1 >> d2 >> c;
	cout << n << " ";
	if(stoi(d1.substr(0,4)) >= 2010 || stoi(d2.substr(0,4)) >= 1991)
	    cout << "eligible\n";
	else if(stoi(d1.substr(0,4)) < 2010 && stoi(d2.substr(0,4)) < 1991 && c > 40)
	    cout << "ineligible\n";
	else
		cout << "coach petitions\n";
    }
    return 0;
}
*/

int main() {
    string n, d1, d2;
    int c, t;
    cin >> t;
    while (t--) {
        cin >> n >> d1 >> d2 >> c;
        cout << n << " ";
        
        int year1 = stoi(d1.substr(0, 4));
        int year2 = stoi(d2.substr(0, 4));
        
        if (year1 >= 2010 || year2 >= 1991) {
            cout << "eligible\n";
        } else if (c > 40) {
            cout << "ineligible\n";
        } else {
            cout << "coach petitions\n";
        }
    }
    return 0;
}
