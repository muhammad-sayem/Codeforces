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
        string str[9];
        int i, j;
        string s;

        for(i=0; i<8; i++){
            cin >> str[i];
        }

        int n = 8;

            for(i=0; i<8; i++){
                for(j=0; j<8; j++){
                    if(str[i][j] != '.'){
                        s.pb(str[i][j]);
                    }
                }
            }

        cout << s << endl;
    }

    return 0;
}
