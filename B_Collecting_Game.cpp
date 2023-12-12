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
        int n, i;
        cin >> n;
        vector<pair<ll,ll>> v;
        ll pre[n+5];

        v.pb({0, 0});

        for(i=1; i<=n; i++){
            ll val;
            cin >> val;
            v.pb({val, i});
        }

        sort(v.begin(), v.end());

        pre[0] = 0;

        for(i=1; i<=n; i++){
            pre[i] = pre[i-1] + v[i-1].first;
        }
        
        ll cnt = 0;
        int ans[n+5] = {0};

        for(i=n-1; i>=0; i--){
            if(pre[i+1] >= v[i+1].first){
                cnt++;
                ans[v[i].second] = cnt;
            }
            else{
                cnt = 0;
            }
        }

        for(i=1; i<=n; i++){
            ans[v[i].second] += i;
        }

        for(i=1; i<=n; i++){
            cout << ans[i]-1 << " ";
        }
        cout << nl;
    }

    return 0;
}