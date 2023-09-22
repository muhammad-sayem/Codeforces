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

    int n, i;
    cin >> n;
    cin.ignore();

    string s;
    cin >> s;
    vector<char> v;

    if(n<=3){
        cout << s << endl;
    }

    else if(n%2 == 0){
        for(i=0; i<n; i++){
            if(i%2 != 0){
                v.pb(s[i]);
                v.pb('-');
            }
            else{
                v.pb(s[i]);
            }
        }
        v.pop_back();

        for(auto ch: v){
            cout << ch;
        }
    }

    else{
        for(i=0; i<n-3; i++){
            if(i%2 != 0){
                v.pb(s[i]);
                v.pb('-');
            }
            else{
                v.pb(s[i]);
            }
        }

        for(i=n-3; i<n; i++){
            v.pb(s[i]);
        }

        for(auto ch: v){
            cout << ch;
        }
    }

    return 0;
}
