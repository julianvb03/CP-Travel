#include <bits/stdc++.h>
using namespace std;

int main() {
    int ncase {}, acase {}, rruners[100] {};
    scanf("%d\n", &ncase);

    while(ncase--){
        int nrruners {}, prruner {};
        scanf("%d", &nrruners);
        while(nrruners--){
            int arruner;
            scanf("%d", &arruner);
            rruners[prruner++] = arruner;
        }
        printf("Case %d: %d\n", ++acase, *max_element(rruners, rruners + 100));
        memset(rruners, 0, sizeof(rruners));
    }
}