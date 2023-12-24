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
        ll n, i, neg = 0, zero = 0;
        cin >> n;
        ll a[n+5];

        for(i=1; i<=n; i++){
            cin >> a[i];
            if(a[i] < 0) neg++;
            else if(a[i] == 0) zero++;
        }

        if(neg%2 != 0 || zero != 0) {
            cout << 0 << nl;
        }
        
        else{
            cout << 1 << nl;
            cout << 1 << " " << 0 << nl;
        }
    }

    return 0;
}