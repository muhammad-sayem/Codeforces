#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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
    fastIO;                     // Code & Logic credit: hridhon vai //

    int test;
    cin >> test;

    while(test--){
        ll a, b, c;
        cin >> a >> b >> c;

        vector<ll> v;

        v.pb(a);
        v.pb(b);
        v.pb(c);

        sort(v.begin(), v.end());

        if(v[1] % v[0] != 0 || v[2] % v[0] != 0){
            no;
        }

        else{
            ll cnt = 0;

            cnt += (v[1]/v[0])-1;
            cnt += (v[2]/v[0])-1;

            if(cnt <= 3) yes;
            else no;
        }
    }

    return 0;
}