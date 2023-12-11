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

    int test;
    cin >> test;

    while(test--){
        ll a, b, xk, yk, xq, yq, i;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<ll> dx = {-a, -a, a, a, b, b, -b, -b};
        vector<ll> dy = {-b, b, b, -b, a, -a, -a, a};

        set<pair<ll, ll>> dexK;
        set<pair<ll, ll>> dexQ;

        for(i=0; i<8; i++){
            dexK.insert({xk+dx[i], yk+dy[i]});
        }

        for(i=0; i<8; i++){
            dexQ.insert({xq+dx[i], yq+dy[i]});
        }

        ll ans = 0;

        for(auto it: dexK){
            if(dexQ.find(it) != dexQ.end()){
                ans++;
            }
            // cout << it.first << " " << it.second << nl;
        }
        cout << ans << nl;
    }

    return 0;
}