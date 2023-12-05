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

        int val = s[1]-'0', i;
        char ch = s[0];

        for(i=1; i<=8; i++){
            if(i != val){
                cout << ch << i << nl;
            }
        }

        for(i=0; i<=7; i++){
            char c = i+'a';
            if(c != ch){
                cout << c << val << nl;
            }
        }
    }

    return 0;
}