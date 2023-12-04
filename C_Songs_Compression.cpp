#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
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

    ll n, m, i;
    cin >> n >> m;
    vector<pair<ll, ll>> v;
    ll sum1 = 0;
    ll sum2 = 0;

    while(n--){
        ll x, y;
        cin >> x >> y;

        v.pb({x, y});
    }

    for(auto pair: v){
        sum1 += pair.first;
        sum2 += pair.second;
    }

    if(sum1 > m && sum2 > m) cout << -1 << nl;
    else if(sum1 <= m) cout << 0 << nl;
    else{
        vector<ll> diff;

        for(i=0; i<v.size(); i++){
            diff.pb(abs(v[i].first - v[i].second));
        }

        sort(diff.begin(), diff.end(), greater<ll>());
        ll cnt = 0;
        for(i=0; i<diff.size(); i++){
            sum1 -= diff[i];
            cnt++;
            if(sum1 <= m){
                break;
            }
        }

        cout << cnt << nl;
    }

    return 0;
}