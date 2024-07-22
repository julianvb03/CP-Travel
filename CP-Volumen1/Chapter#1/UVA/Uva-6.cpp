#include <bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;

   while(true) {
        char s[15];
	scanf("%14s", s);
	
	if(strcmp(s, "#") == 0)
		break;
	printf("Case %d: ", t);
	if(strcmp(s, "HELLO") == 0)
	    printf("ENGLISH\n");
	else if(strcmp(s, "HOLA") == 0)
	    printf("SPANISH\n");
	else if(strcmp(s, "HALLO") == 0)
	    printf("GERMAN\n");
	else if(strcmp(s, "BONJOUR") == 0)
	    printf("FRENCH\n");
	else if(strcmp(s, "CIAO") == 0)
	    printf("ITALIAN\n");
	else if(strcmp(s, "ZDRAVSTVUJTE") == 0)
	    printf("RUSSIAN\n");
	else
	    printf("UNKNOWN\n");
	t++;
   }
}
