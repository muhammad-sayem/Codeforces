#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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
        ll n, m, i;
        cin >> n >> m;
        map<ll, bool> mp;
        vector<ll> v;
        i = 1;

        while(1){
            int val = (m*i)%10;
            if(!mp[val]){
                v.pb(val);
                mp[val] = true;
            }
            else{
                break;
            }
            i++;
        }

        // for(auto val: v){
        //     cout << val << " ";
        // }

        ll value = n/m;

        ll res = value/v.size();
        ll rem = value%v.size();

        ll sum = 0;

        for(i=0; i<v.size(); i++){
            sum += v[i];
        }

        ll ans = sum*res;
        
        for(i=0; i<rem; i++){
            ans += v[i];
        }

        cout << ans << endl;

        // cout << "Value: " << value << endl;
        // cout << "Res: " << res << endl;
        // cout << "Rem: " << rem << endl;
        // cout << "Temp Ans: " << ans << endl;
    }

    return 0;
}