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
        int n, k, i, cnt = 1, maxx = 1;
        cin >> n >> k;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        if(n==1) cout << 0 << endl;

        else{
            for(i=0; i<n-1; i++){
                if(abs(a[i+1] - a[i]) <= k) {
                    cnt++;
                    maxx = max(cnt, maxx);
                }
                else{
                    cnt = 1;
                }
            }
            cout << n-maxx << endl;
        }
    }

    return 0;
}
