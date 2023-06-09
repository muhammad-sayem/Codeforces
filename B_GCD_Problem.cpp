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
        ll n;
        cin >> n;

        if(n%2 == 0) cout << (n-1)/2 << " " << (n-1)/2+1 << " " << 1 << endl;
        
        else{
            n -= 1;
            n /= 2;

            if(n%2 == 0) cout << n-1 << " " << n+1 << " " << 1 << endl;
            else cout << n-2 << " " << n+2 << " " << 1 << endl;        
        }
    }

    return 0;
}