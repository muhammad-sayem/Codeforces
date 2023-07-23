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

    int test; cin >> test;

    while(test--){
        ll n, i; cin >> n;
        ll a[n+5];

        for(i=1; i<=n; i++){
            cin >> a[i];
        }

        bool flag = false;

        for(i=1; i<n; i++){
            if(a[i] > a[i+1]){
                flag = true;
                break;
            }
        }

        if(flag) cout << 0 << endl;
        
        else{

            ll val;
            ll minn = 1e18;

            for(i=1; i<n; i++){
                val = abs(a[i]-a[i+1]);
                minn = min(val, minn);
            }
            cout << minn/2+1 << endl;
        }
    }

    return 0;
}
