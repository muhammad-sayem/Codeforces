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
        int n, i;
        cin >> n;

        string s;
        cin >> s;

        bool flag = true;

        for(i=0; i<n; i++){
            if(s[i] != 'W'){
                int blue = 0, red = 0;

                while(i<n && s[i] != 'W'){
                    if(s[i] == 'B') blue++;
                    if(s[i] == 'R') red++;
                    i++;
                }

                if(blue == 0 || red == 0){
                    flag = false;
                    break;
                }
            }
        }

        if(flag) yes;
        else no;
    }

    return 0;
}