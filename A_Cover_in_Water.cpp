#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
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
        ll n, i, cnt = 0, ans = 0;
        cin >> n;

        string s;
        cin >> s;

        for(i=0; i<n; i++){
            if(s[i] == '.') cnt++;
        }

        if(cnt >= 3){
            bool f = false;
            for(i=0; i<n-2; i++){
                if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                    f = true;
                    break;
                }
            }

            if(f) cout << 2 << nl;
            else cout << cnt << nl;
        }
        else{
            cout << cnt << nl;
        }
    }

    return 0;
}