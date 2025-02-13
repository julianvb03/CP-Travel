#include <bits/stdc++.h>
#define NL 26
using namespace std;

inline int conversion_cal(char ch) {
    if(isalpha(ch) == 0)    return 0;

    if(islower(ch) != 0)    return int(ch) - 96;
    else    return int(ch) - 64;
}

int reduction(int x) {
    gt9:
    int aux {};
    while(x > 9)    aux += x % 10, x /= 10;
    aux += x, x = aux;
    if(x > 9)   goto gt9;
    return aux;
}

double ratio_cal(const char* n1, const char* n2) {
    int sum1 {}, sum2 {}, aux1 {}, aux2 {};
    for(int i = 0; i < NL; i++) {
      sum1 += conversion_cal(*(n1 + i));
      sum2 += conversion_cal(*(n2 + i));    
    }
    sum1 = reduction(sum1), sum2 = reduction(sum2);

    if(sum1 == 0 || sum2 == 0)  return 0.0;
    return sum1 > sum2 ? double(sum2) / sum1 * 100: double(sum1) / sum2 * 100;
}

int main() {
    char n1[NL] {}, n2[NL] {};
    
    while (fgets(n1, NL, stdin) && fgets(n2, NL, stdin)) {
        printf("%.2f %%\n", ratio_cal(n1, n2));

        memset(n1, 0, sizeof(n1));
        memset(n2, 0, sizeof(n2));
    }

    return 0;
}