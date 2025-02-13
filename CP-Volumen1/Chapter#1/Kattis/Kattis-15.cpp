#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    while(true) {
        cin >> x >> y;
        if(x == 0 && y == 0)
            break;
        
        if(x + y == 13)
            printf("Never speak again.\n");
        else if(x < y)
            printf("Left beehind.\n");
        else if(x > y)
            printf("To the convention.\n");
        else
            printf("Undecided.\n");
    }
}