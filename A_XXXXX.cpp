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
    fastIO;             // Code idea from: GUSSURI (Iftekhar vai) //

    int test;
    cin >> test;

    while(test--){
        ll n, x, i, j, sum = 0;
        cin >> n >> x;
        ll a[n+5];
        ll ans = -1;

        for(i=0; i<n; i++) cin >> a[i];

        for(i=0; i<n; i++){
            sum += a[i];
            
            if(sum%x != 0){
                ans = max(ans, i);
            }
        }

        for (i = 0, j = n - 1; i < n; i++, j--){
            sum += a[j];
            if (sum % x != 0)
            {
                ans = max(ans, i);
            }
        }

        if(ans != -1) ans++;
        cout << ans << endl;
    }

    return 0;
}
