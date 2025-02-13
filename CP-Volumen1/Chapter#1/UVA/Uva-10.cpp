#include <bits/stdc++.h>
using namespace std;

int main() {
    int N {}, M{}, AM{}, CN {};

    while(scanf("%d", &N) != EOF) {
        if(N == 0) break;
        while(N--) {
            int ACE {};
            scanf(" \n%d", &ACE);
            if(ACE != 0) M++;
            else AM++;
        }
        printf("Case %d: %d\n", ++CN, M - AM);
        M = 0, AM = 0;
    }
}