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
        ll n, i, k;
        cin >> n >> k;
        ll a[n+5];

        ll mult = 1;

        for(i=0; i<n; i++){
            cin >> a[i];
            mult *= a[i];
        }

        if(2023%mult != 0) no;
        
        else{
            yes;
            if(k == 1){
                cout << 2023/mult << nl;
            }

            else{
                for(i=1; i<k; i++){
                    cout << 1 << " ";
                }
                if(k>1){
                    cout << 2023/mult << nl;
                }
            }
        }
    }

    return 0;
}
