#include"bits/stdc++.h"
using namespace std;

int main() {
    int c;
    scanf("%d", &c);
    int m = 1;
    while (c--) {
        int n, p; 
        int h = 0, l = 0;
        bool f = true;
        scanf("%d", &n);
        
        while(n--) {
            int a;
            scanf("%d", &a);
            if(f) {f = false; p = a; continue;}
            
            if(a < p)
                l++;
            else if(a > p)
                h++;

            p = a;
        }
        printf("Case %d: %d %d\n", m, h, l);
        m++;
    }
}