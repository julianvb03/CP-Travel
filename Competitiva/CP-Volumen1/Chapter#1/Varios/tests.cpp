#include <bits/stdc++.h>
using namespace std;
#ifdef PARTE1

int main() {
    int array[10];
    memset(array, -1, sizeof array);
    for(int i = 0; i < (sizeof(array)) / sizeof(int); i++){
        cout << array[1] << "\n";
    }
}

#endif

int main() {
  int N; scanf("%d\n", &N);
  while (N--) {                                  // loop from N,N-1,...,0
    char x[110];                                 // set size a bit larger
    scanf("0.%[0-9]...\n", &x);                  // `&' is optional here
    // note: if you are surprised with the technique above,
    // please check scanf details in www.cppreference.com
    printf("the digits are 0.%s\n", x);
  }
  return 0;
}