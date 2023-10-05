#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
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
        int n, i;
        cin >> n;

        if(n%2 == 0) cout << n/2 << " " << n/2 << endl;
       
        else{
            int val = 1;

            for(i=3; i<=sqrt(n); i+=2){
                if(n%i == 0){
                    val = i;
                    break;
                }
            }

            if(val == 1) cout << (n/val)-1 << " " << 1 << endl;
            else cout << (n/val) << " " << n-(n/val) << endl;
        }
    }

    return 0;
}
