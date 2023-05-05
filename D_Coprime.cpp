#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pll             pair<long long,long long>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             /// Abid vai + Coding Community | Newton School ///

    int test;
    cin >> test;

    while(test--){
        int n, i, j;
        cin >> n;

        int a[1005];
        memset(a,0,sizeof(a));

        int x;

        for(i=1; i<=n; i++){
            cin >> x;
            a[x] = i;
        }

        int ans = -1;

        for(i=1; i<=1000; i++){
            for(j=i; j<=1000; j++){
                if(a[i] != 0 && a[j] != 0){
                    if(gcd(i,j) == 1){
                        ans = max(ans, a[i]+a[j]);
                    }
                }
            }
        }

        cout << ans << endl;

    }

    return 0;
}