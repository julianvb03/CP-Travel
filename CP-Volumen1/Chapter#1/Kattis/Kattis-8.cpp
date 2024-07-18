#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    bool x = abs(n - m) == 1 ? true : false;
    if(m > n && x == false)
        printf("Dr. Chaz will have %d pieces of chicken left over!\n", m - n);
    else if(m > n && x == true)
        printf("Dr. Chaz will have 1 piece of chicken left over!\n");
    else if(m < n && x == false)
        printf("Dr. Chaz needs %d more pieces of chicken!\n", n - m);
    else
        printf("Dr. Chaz needs 1 more piece of chicken!\n");
}