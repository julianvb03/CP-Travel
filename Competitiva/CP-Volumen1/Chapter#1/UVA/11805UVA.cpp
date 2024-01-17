#include <bits/stdc++.h>
using namespace std;

#ifdef MACRO
int main() {
    int T;  scanf("%d", &T);
    int casN = 0;
    while (T--) {
        int N, K, P;
        scanf("%d %d %d", &N, &K, &P);
        int TO = P + K;
        int C = 0;
        casN++;
        while (TO--){
            if (C == N)     C = 1; 
            else            ++C;
        }
        printf("Case %d: %d\n", casN, C);
        TO = 0, C = 0;
    }
}
#endif

int main() {
    int T; scanf("%d", &T);
    for (int caseN = 1; caseN <= T; caseN++){
        int N, K, P;
        scanf("%d %d %d", &N, &K, &P);
        int C = (K + P) % N;
        //El modulo de un número por uno de sus multiplos incluido el mismo es 0
        if (C == 0)     C = N;
        printf("Case %d: %d\n", caseN, C);
    }
}