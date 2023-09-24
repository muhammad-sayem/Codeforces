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

    int test;
    cin >> test;

    while(test--){
        ll n, i;
        cin >> n;
        bool flag = true;
        vector<ll> v1;
        vector<ll> v2;

        while(n--){
            ll a, b, pos;
            cin >> a >> b;

            v1.pb(a);
            v2.pb(b);

            for(i=1; i<v2.size(); i++){
                if(v2[i] >= v2[0]){
                    if(v1[i] >= v1[0]){
                        flag = false;
                        break;
                    }
                }
            }
        }

        if(!flag) cout << -1 << endl;
        else cout << v1[0] << endl;
    }

    return 0;
}