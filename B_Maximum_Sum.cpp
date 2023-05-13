#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      sz(s)           s.size()
#define      pii             pair <int,int>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;                 /// Sahenul vai ///

    int test;
    cin >> test;

    while(test--){
        ll n, k, i, j, sum = 0;
        cin >> n >> k;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }

        sort(a, a+n);

        ll x = k;

        for(i=n-1; i>=0; i--){
            if(x == 0) break;
            sum -= a[i];
            x--;
        }

        ll maxx = sum;

        for(j=0; j<n; j+=2){
            k--;
            sum -= a[j];
            sum -= a[j+1];
            i++;
            sum += a[i];
            maxx = max(maxx, sum);
            if(k == 0) break;
        }

        cout << maxx << endl;

    }
                
    return 0;
}


