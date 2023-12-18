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
        int i;
        int pos = -1, zero = 0;

        string s1;
        string s2;
        bool flag = true;

        s1.pb(s[0]);

        if(s[1] != '0'){

            if(s.size() == 2){
                if(s[0] < s[1]){
                    cout << s[0] << " " << s[1] << nl;
                }
                else{
                    cout << -1 << nl;
                }
            }

            else{
                cout << s[0] << " ";

                for(i=1; i<s.size(); i++){
                    cout << s[i];
                }
                cout << nl;
                continue;
            }

            
        }

        else{

            for(i=1; i<s.size(); i++){
                if(s[i] == '0'){
                    zero++;
                }
            }

            if(zero == s.size()-1){
                cout << -1 << nl;
            }

            else{
                for(i=1; i<s.size(); i++){
                if(s[i] != '0'){
                    pos = i;
                    break;
                }
                }

                for(i=1; i<pos; i++){
                    s1.pb(s[i]);
                }

                for(i=pos; i<s.size(); i++){
                    s2.pb(s[i]);
                }

                int a = stoi(s1);
                int b = stoi(s2);

                if(a < b) cout << a << " " << b << nl;
                else cout << -1 <<  nl;

                // cout << s1 << " " << s2 << nl;
            }
        }
    }

    return 0;
}