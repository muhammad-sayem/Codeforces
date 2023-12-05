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
        string s;
        cin >> s;
        string ans;

        int i, b = 0, B = 0, sz = s.size();

        for(i=sz-1; i>=0; i--){
            if(s[i] == 'b') b++;
            else if(s[i] == 'B') B++;

            else if(s[i] >= 'a' && s[i] <= 'z'){
                if(b == 0) ans.pb(s[i]);
                else b--;
            }

            else if(s[i] >= 'A' && s[i] <= 'Z'){
                if(B == 0) ans.pb(s[i]);
                else B--;
            }
        }
        
        reverse(ans.begin(), ans.end());
        cout << ans << nl;
    }

    return 0;
}