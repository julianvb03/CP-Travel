#include"bits/stdc++.h"
using namespace std;

int main() {
    int x = 1000001, y = -1000001, z = 0, c = 1,n;
    while(scanf("%d", &n) != EOF) {
        int a;
        while(n--) {
            scanf("%d", &a);
            if(a < x)
                x = a;
            // Could not be else if because the barrier case only one number at line, then it be the min and max at the same time
            if(a > y)
                y = a;
        }
        printf("Case %d: %d %d %d\n", c, x, y, y - x);
        c++, x = 1000001, y = -1000001, z = 0;
    }
}