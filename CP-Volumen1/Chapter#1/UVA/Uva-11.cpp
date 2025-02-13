#include <bits/stdc++.h>
using namespace std;

double price(int p, int a, int b, int c, int d, int k) {
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main() {
    int p {}, a {}, b {}, c {}, d {}, n{};
    while(scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) != EOF){
        double max {}, maxloss {};
        for(int i = 1; i <= n; i++){
            double temp {};

            temp = price(p, a, b, c, d, i);
            if(i == 1) {
                max = temp;
                continue;
            }

            if(temp > max) max = temp; 
            else if(max > temp && (max - temp) > maxloss) maxloss = max - temp;
        }

        printf("%f\n", maxloss);
    }
}