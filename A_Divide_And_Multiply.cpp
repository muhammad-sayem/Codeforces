#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      ull             unsigned long long
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
        ll n, i, cnt = 0, sum = 0;
        cin >> n;
        vector<ll> v(n);

        for(i=0; i<n; i++){
            cin >> v[i];
        }

        for(i=0; i<n; i++){
            while(v[i]%2 == 0){
                v[i] /= 2;
                cnt++;
            }
        }

        sort(v.begin(), v.end());

        for(i=0; i<cnt; i++){
            v[n-1] *= 2;
        }

        for(i=0; i<n; i++){
            sum += v[i];
        }
        cout << sum << endl;
    }

    return 0;
}
