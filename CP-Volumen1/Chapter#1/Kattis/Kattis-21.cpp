    #include <bits/stdc++.h>

    using namespace std;

    #define vi vector<int>
    #define ar array
    #define ll long long
    #define ld long double
    #define sza(x) ((int)x.size())
    #define all(a) (a).begin(), (a).end()

    const int MAX_N = 1e5 + 5;
    const ll MOD = 1e9 + 7;
    const ll INF = 1e9;
    const ld EPS = 1e-9;

    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        int n {}, nu {}, de {}, i {}, n2 {}, eve[100] {};
        scanf("%d\n", &n);
        n2 = n;
        while(n--){
            int temp;
            scanf(" %d", &eve[i++]);
        }

        for(int j = 0; j < n2 ; j++){
            if(eve[j] != -1)     nu += eve[j], de++;
        }

        printf("%.5f\n", double(nu) / de);
    }
