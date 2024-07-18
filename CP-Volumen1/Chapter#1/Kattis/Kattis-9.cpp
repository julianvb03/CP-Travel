#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    unsigned int bp = x * 3 + y * 2 + z;


    if(bp >= 8)
        printf("Province or Gold\n");
    else if(bp >= 6)
        printf("Duchy or Gold\n");
    else if(bp >= 5)
        printf("Duchy or Silver\n");
    else if(bp >= 3)
        printf("Estate or Silver\n");
    else if(bp >= 2)
        printf("Estate or Copper\n");
    else
        printf("Copper\n");
}