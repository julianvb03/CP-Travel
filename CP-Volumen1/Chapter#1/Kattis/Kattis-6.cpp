#include<bits/stdc++.h>
using namespace std;

int main() {
    char m[4];
    int t;
    // %3s
    scanf("%[^\n]s %d", m, &t);
    printf("%s %d\n", m, t);

    if(strcmp(m, "DEC") == 0 && t == 25)
	printf("yup\n");
    else if(strcmp(m, "OCT") == 0 && t == 31)
	printf("yup\n");
    else
	printf("nope\n");
}
