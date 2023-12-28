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
        ll n, i;
        cin >> n;

        string s;
        cin >> s;

        string ans;

        for(i=s.size()-1; i>=0; i--){
            if((s[i] != 'a' && s[i] != 'e') && (s[i-1] == 'a' || s[i-1] == 'e') && (s[i-2] != 'a' && s[i-2] != 'e')){
                ans.pb(s[i]);
                ans.pb(s[i-1]);
                ans.pb(s[i-2]);
                ans.pb('.');
                i -= 2;
            }
            else{
                ans.pb(s[i]);
                ans.pb(s[i-1]);
                ans.pb('.');
                i--;
            }
        }

        if(ans[ans.size()-1] == '.') ans.pop_back();
        reverse(ans.begin(), ans.end());

        cout << ans << nl;
    }

    return 0;
}