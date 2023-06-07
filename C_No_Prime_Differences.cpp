#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             // idea from AlgoBot //

    int test;
    cin >> test;

    while(test--){
        ll n, m, i, j, k, val;
        cin >> n >> m;

        ll a[n+1][m+1];
        
        val = 1;

        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                a[i][j] = val;
                val++;
            }
        }

        for(i=2; i<=n; i+=2){
            for(j=1; j<=m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        for(i=1; i<=n; i+=2){
            for(j=1; j<=m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}