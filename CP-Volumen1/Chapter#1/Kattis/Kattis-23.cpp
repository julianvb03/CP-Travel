#include<bits/stdc++.h>
using namespace std;

int main() {
    int N {}, T {};
    int min = INT_MAX;
    int ts[1000] {};
    int tp[1000] {};

    scanf("%d\n", &N);
    int i = 0;
    while (N--) {
        scanf(" %d", &ts[i]);
        i++;
    }
    N = i;

    scanf("%d\n", &T);
    i = 0;
    while (T--) {
        scanf(" %d", &tp[i]);
        i++;
    }
    T = i;

    int act {};
    while (N--) {
        int number {}; scanf("%d", &number);
        while (number --) {
            int temt{}; scanf(" %d", &temt);
            if(ts[act] + tp[temt - 1] < min) min = ts[act] + tp[temt - 1];
        }
        act++;
    }

    int money {};
    scanf("%d", &money);
    
    printf("%d", int(money / min) > 0 ?  int(money / min) - 1: int(money / min));
}