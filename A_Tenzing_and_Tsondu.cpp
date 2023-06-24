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
        ll n, m, i, t1 = 0, t2 = 0;
        cin >> n >> m;
        ll a[n+5];
        ll b[m+5];

        for(i=0; i<n; i++){
            cin >> a[i];
            t1 += a[i];
        }

        for(i=0; i<m; i++){
            cin >> b[i];
            t2 += b[i];
        }

        if(t1 == t2) cout << "Draw" << endl;
        else if(t1>t2) cout << "Tsondu" << endl;
        else cout << "Tenzing" << endl;

    } 

    return 0;
}