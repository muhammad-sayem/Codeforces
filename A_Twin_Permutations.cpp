#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      sort(a)         sort(a, a+n);
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
        int n, i;
        cin >> n;
        int a[n+5];
        int b[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }
        for(i=0; i<n; i++){
            b[i] = a[i];
        }

        sort(b);

        int val = b[0] + b[n-1];

        for(i=0; i<n; i++){
             cout << abs(val-a[i]) << " ";
        }

        cout << endl;
    }
    
    return 0;
}