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
        ll n, k;
        cin >> n >> k;

        if(k == 1) cout << 1 << endl;
        
        else{
            ll val;
            
            if(k < n) cout << k << endl;
            
            else{

                if(k%(n-1) == 0) val = k/(n-1);
                else if(k%(n-1) != 0)val = (k/(n-1))+1;

                cout << k+val-1 << endl;
            }
        }
    }
        
    return 0;
}
