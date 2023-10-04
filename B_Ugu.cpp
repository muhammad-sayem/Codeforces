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
        int n, i;
        cin >> n;
        cin.ignore();

        string s;
        cin >> s;

        bool flag = false;
        int ans = 0;

        for(i=1; i<n; i++){
            if(s[i] != s[i-1]){

                if(!flag && s[i] == '0'){
                    flag = true;
                    ans++;
                }

                else if(flag){
                    ans++;
                }

            }
        }  

        cout << ans << endl;
    }

    return 0;
}
