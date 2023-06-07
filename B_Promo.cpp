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

    ll n, q, i;
    cin >> n >> q;
    ll a[n+2];

    a[0] = 0;

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    sort(a+1, a+n+1, greater<int>());

    for(i=1; i<=n; i++){
        a[i] = a[i-1] + a[i];
    }

    while(q--){
        ll x, y;
        cin >> x >> y;

        cout << a[x] - a[x-y] << endl;

    }

    return 0;
}