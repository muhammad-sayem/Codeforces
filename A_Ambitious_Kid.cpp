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

    ll n, i;
    cin >> n;
    ll a[n+5];
    vector<ll> v1;
    vector<ll> v2;
    bool flag = false;

    for(i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 0){
            flag = true;
        }
    }

    sort(a, a+n, greater<ll>());

    if(flag) cout << 0 << endl;

    else{
        for(i=0; i<n; i++){
            if(a[i]>0) v1.pb(a[i]);
            else if(a[i]<0) v2.pb(a[i]);
        }

        if(v1.empty()){
            cout << abs(v2[0]) << endl;
        }
        else if(v2.empty()){
            cout << abs(v1[v1.size()-1]) << endl;
        }
        else{

            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end(), greater<ll>());

            ll val1 = abs(v1[0]);
            ll val2 = abs(v2[0]);

            ll minn = min(val1, val2);

            cout << minn << endl;
        }
    }

    return 0;
}