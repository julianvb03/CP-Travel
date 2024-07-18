#include<bits/stdc++.h>
using namespace std;
/*
it main() {
    int nt;
    scanf("%d", &nt);
    while(nt--) {
	int na;
	scanf("%d", &na);
	int result = (na * 567 / 9 + 7492) * 235 / 47 -498;
	int index = to_string(result).length() - 2;
	string si = to_string(result);
	cout << si[index] << endl;
    }
}
*/
int main() {
    int n {};
    scanf("%d", &n);
    while(n--) {
	int a {};
	scanf("%d", &a);
	long long int r = abs(((a * 567 / 9 + 7492) * 235 / 47 - 498) / 10 % 10); 
	printf("%lld\n", r);
    }
    return 0;
}
