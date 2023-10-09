#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes              (cout << "YES\n")
#define      no             (cout << "NO\n")
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
        int n;
        cin >> n;

        if(n < 7 || n == 9) no;

        else{
            if(n%3 != 0){
                yes;
                cout << 1 << " " << 2 << " " << n-3 << endl;
            }
            else{
                yes;
                cout << 1 << " " << 4 << " " << n-5 << endl;
            }
        }
    }

    return 0;
}