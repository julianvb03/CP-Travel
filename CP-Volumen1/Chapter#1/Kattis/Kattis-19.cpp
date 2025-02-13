#include <bits/stdc++.h>
using namespace std;

int main() {
    int lin[105] {}, ou[105] {};
    int i {}, j {}, p {};
    scanf("%d\n", &i);
    i--, p = i;
    while (i--) {
        scanf(" %d", &lin[j]);
        j++;
    }
    ou[0] = 1;
    for(int k = 0; k < p; k++) {
        ou[lin[k] + 1] = k + 2;
    }

    cout << ou[0];
    for(int i = 1; i < p + 1; i++) {
        cout << " " << ou[i];
    }
    cout << "\n";
}
