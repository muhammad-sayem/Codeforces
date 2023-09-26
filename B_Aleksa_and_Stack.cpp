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
       vector<ll> v;

       v.pb(5);
       v.pb(6);
       v.pb(12);

       ll val = 13;

       for(i=1; i<=n-3; i++){
            v.pb(val);
            val++;
       }

       for(i=0; i<v.size(); i++){
            cout << v[i] << " ";
       }
       cout << endl;
    }  

    return 0;
}