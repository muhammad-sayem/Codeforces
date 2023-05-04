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
    fastIO;                     /// Abid vai ///

    int test;
    cin >> test;

    while(test--){
        ll l, r, a;
        cin >> l >> r >> a;

        ll x = l/a;
        ll y = r/a;

        if(x == y) cout << (r/a) + (r%a) << endl;
        else{
            x = (r/a) + (r%a);
            y = ((r/a)-1) + (a-1);

            ll ans = max(x,y);
            cout << ans << endl;
        }
    }

    return 0;
}