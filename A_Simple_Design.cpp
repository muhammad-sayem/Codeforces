#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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
        ll x, k, i, ans;
        cin >> x >> k;

        string s = to_string(x);
        ll sum = 0;

        for(i=0; i<s.size(); i++){
            sum += s[i]-'0';
        }

        if(sum%k == 0) cout << x << endl;

        else{
            x++;

            while(1){
                string str = to_string(x);
                ll sm = 0;
                for(i=0; i<str.size(); i++){
                    sm += str[i]-'0';
                }

                if(sm%k == 0){
                    ans = x;
                    break;
                }
                x++;
            }
            cout << ans << endl;
        }
    }

    return 0;
}