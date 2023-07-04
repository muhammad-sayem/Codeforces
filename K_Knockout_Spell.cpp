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
    fastIO;

    int n, k, i, j;
    cin >> n >> k;
    int a[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for(i=0; i<=n-k; i++){
        for(j=0; j<=n-k; j++){
            if(a[i][j] == a[i][j+k-1] && a[i][j] == a[i+k-1][j] && a[i][j] == a[i+k-1][j+k-1]){
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
