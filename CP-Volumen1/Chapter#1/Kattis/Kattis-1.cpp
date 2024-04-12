/**
 * Kattis Faktor
 * @author Julian Valencia (valenciajuliann@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */
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