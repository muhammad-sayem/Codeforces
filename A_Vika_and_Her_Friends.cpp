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
        int n, m, k;
        cin >> n >> m >> k;

        int x, y;
        cin >> x >> y;

        int val1 = x+y;

        bool flag = true;

        while(k--){
            int p, q;
            cin >> p >> q;
            int val2 = p+q;

            if(val1%2 == 0 && val2%2 == 0){
                flag = false;
            }

            else if(val1%2 != 0 && val2%2 != 0){
                flag = false;
            }
        }

        if(flag) cout << yes << endl;
        else cout << no << endl;
    }

    return 0;
}
