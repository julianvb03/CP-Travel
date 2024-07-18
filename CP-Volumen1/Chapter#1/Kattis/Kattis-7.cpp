#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if(a == 0 && b == 0)
        printf("Not a moose\n");
    else if(a == b)
        printf("Even %d\n", a + b);
    else
        printf("Odd %d\n", a > b ? a*2 : b*2);
}