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
    fastIO;             // code idea from asif_abdullah //

    int test;
    cin >> test;

    while(test--){
        ll n, i, sum = 0;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
            sum += abs(a[i]);
        }

        int neg = 0;
        int maxx = 0;

        for(i=0; i<n; i++){
            if(a[i] == 0) continue;
            
            else if(a[i] < 0) neg++;
            
            else{
                if(neg > 0) {
                    maxx++;
                }
                neg = 0;
            }
        }

        if(neg > 0) maxx++;

        cout << sum << " " << maxx << endl;
    }

    return 0;
}
