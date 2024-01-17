#include <bits/stdc++.h>
using namespace std;

//atajos de tipos
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
// memset(memo, -1, sizeof memo);       inicializar tabla memoizacion DP
// vi memo(n, .1);                      metodo alterno
// memset(memo, 0, sizeof memo);        vaciar array


int main() {

//Atajos comunes, Infinitos, "Epsilon maquina"
int index, n, d, new_computation;
const int INF = 1e9;
const int LLINF = 4e18;
const double EPS = 1e-9;
index = (index+1) % n;                  //a la derecha o vuelta a 0
index = (index+n-1) % n;                //a la izquierda o vuelta a n-1
int ans = (int)((double)d + 0.5);       //para redondear
ans = min(ans, new_computation);        //atajo min/ max

}

