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
    fastIO;             // Logic from: Coding Community | Newton School //

    int test;
    cin >> test;

    while(test--){
        ll n, i, val, sum = 0, cnt;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }

        ll ans = 1e9;

        if(sum%2 == 0) {
            cout << 0 << endl;
            continue;
        }

        for(i=0; i<n; i++){
            cnt = 0;
            val = a[i];

            while((a[i]%2) == (val%2)){
                cnt++;
                a[i] /= 2;
            }
            ans = min(cnt, ans); 
        }

        cout << ans << endl;
    }

    return 0;
}