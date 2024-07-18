#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    if(a <= 0 || b <= 0 || c <= 0 || n < 3 || n > (a+b+c))
	printf("NO\n");
    else 
	printf("YES\n");

    return 0;
}

