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
        
        ll a, b, x ,y, z;
        cin >> a >> b;

        if(b == 1) cout << "NO" << endl;
        
        else{
            z = (a*b)*2;
            x = a;
            y = z - a;
            cout << yes << endl;

            cout << x << " " << y << " " << z << endl;
        }

    }

    return 0;
}
