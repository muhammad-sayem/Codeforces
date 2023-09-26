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
        ll n, k, x;
        cin >> n >> k >> x;

        ll sum1 = (n*(n+1))/2;
        ll diff = n-k;
        ll sum2 = (diff*(diff+1))/2;
        ll sum3 = (k*(k+1))/2;

        ll low = sum3;
        ll high = sum1-sum2;

        if(x>= low && x<=high) cout << yes << endl;
        else cout << no << endl;

        // cout << low << " " << high << endl;
    }

    return 0;
}
