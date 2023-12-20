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
        ll n, i, j, k;
        cin >> n;

        vector<pair<ll,ll>> a(n);
        vector<pair<ll,ll>> b(n);
        vector<pair<ll,ll>> c(n);

        for(i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }

        for(i=0; i<n; i++){
            cin >> b[i].first;
            b[i].second = i;
        }

        for(i=0; i<n; i++){
            cin >> c[i].first;
            c[i].second = i;
        }

        sort(a.begin(), a.end(), greater<pair<ll, ll>>());
        sort(b.begin(), b.end(), greater<pair<ll, ll>>());
        sort(c.begin(), c.end(), greater<pair<ll, ll>>());

        // sort(a.rbegin(), a.rend());
        // sort(b.rbegin(), b.rend());
        // sort(c.rbegin(), c.rend());

        ll ans = 0;

        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                for(k=0; k<3; k++){
                    if((a[i].second != b[j].second) && (a[i].second != c[k].second) && (b[j].second != c[k].second)){
                        ans = max(ans, (a[i].first + b[j].first + c[k].first));
                    }
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}