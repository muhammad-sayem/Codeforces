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

        ll zero = 0, one = 0, i;

        for(i=0; i<s.size(); i++){
            if(s[i] == '0') zero++;
            else one++;
        }

        ll cnt = 0;

        if(zero == one) cout << 0 << nl;
        
        else{
            for(i=0; i<s.size(); i++){
                if(s[i] == '1'){
                    zero--;
                    cnt++;
                }
                else{
                    one--;
                    cnt++;
                }

                if(zero < 0 || one < 0){
                    cnt -= 1;
                    break;
                }
            }
            cout << s.size()-cnt << nl;
        }
    }

    return 0;
}