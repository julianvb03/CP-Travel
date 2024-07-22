#include"bits/stdc++.h"
using namespace std;

int main() {
    int x {};
    scanf("%d", &x);
    while(x--) {
	int y;
	scanf("%d", &y);
	if(y % 2 == 0)
	    printf("%d is even\n", y);
	else
	    printf("%d is odd\n", y);
    }
}

