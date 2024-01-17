//Ejercicio Faktor
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, Ar;
    scanf("%d %d", &Ar, &T);
    int Tent = Ar * (T - 1);
    do {
        Tent++;
    } while (!(Tent == floor(Tent)));
    printf("%d\n", Tent);
}