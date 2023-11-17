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
        ll n, i, j;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        if(n == 1) cout << 0 << endl;

        else{
            vector<ll> v;

            for(i=1; i*i<=n; i++){
                if(n%i == 0) {
                    v.pb(i);
                    if((n/i) != i) v.pb(n/i);
                }
            }

            sort(v.begin(), v.end());
            v.pop_back();

            vector<ll> mx;
            vector<ll> mn;

            for(i=0; i<v.size(); i++){
                ll window = v[i];
                ll sum = 0;
                ll maxx = -1;
                ll minn = 1e18;

                for(j=0; j<n; j++){
                    sum += a[j];
                    if((j+1) % window == 0){
                        maxx = max(maxx, sum);
                        minn = min(minn, sum);
                        sum = 0;
                    }
                }
                mx.pb(maxx);
                mn.pb(minn);
            }

            ll ans = -1e18;

            for(i=0; i<mx.size(); i++){
                ans = max(ans, abs(mx[i]-mn[i]));
            }
            cout << ans << endl;
        }
    }

    return 0;
}