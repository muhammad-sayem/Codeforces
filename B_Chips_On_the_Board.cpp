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

    while (test--){
        int n, i;
        cin >> n;

        ll a[n+5];
        ll b[n+5];

        ll sumA = 0;
        ll sumB = 0;

        for(i=0; i<n; i++){
            cin >> a[i];
            sumA += a[i];
        }

        for(i=0; i<n; i++){
            cin >> b[i];
            sumB += b[i];
        }

        ll minnA = *min_element(a, a+n);
        ll minnB = *min_element(b, b+n);

        for(i=0; i<n; i++){
            sumA += minnB;
        }

        for(i=0; i<n; i++){
            sumB += minnA;
        }
        cout << min(sumA, sumB) << endl;

    }
     
    return 0;
}
