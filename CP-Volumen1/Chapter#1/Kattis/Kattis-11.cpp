#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if(y == 1 && x == 0)
	printf("ALL GOOD\n");
    else if(y == 1)
	printf("IMPOSSIBLE\n");
    else 
	printf("%.9f\n", x / (1.0 - y));
}
