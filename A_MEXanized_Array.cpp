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

ll call(int n){
    ll sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, k, x;
        cin >> n >> k >> x;

        if(n < k) cout << -1 << endl;
        else{

            if(k == x){
                ll val = call(k-1);
                ll temp = n-k;
                ll ans = temp*(x-1);

                cout << ans+val << endl;
            }

            else{

                ll last_mex = k-1;

                if(x >= last_mex){
                    ll val = call(k-1);
                    ll temp = n-k;
                    ll ans = temp*x;

                    cout << ans+val << endl;
                }
                else{
                    cout << -1 << endl;
                }
            }
        }
    }

    return 0;
}