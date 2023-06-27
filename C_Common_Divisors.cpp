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

    ll n, i, cnt = 0, gc = 0;
    cin >> n;
    ll a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
        gc = gcd(gc, a[i]);
    }

    for(i=1; i<sqrt(gc); i++){
        if(gc%i == 0) cnt += 2;
    }
    if(i*i == gc) cnt++;

    cout << cnt << endl;


    return 0;
}
