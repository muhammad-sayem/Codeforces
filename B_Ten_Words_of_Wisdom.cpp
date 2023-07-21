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
        
        int n, i, pos = -1, cnt =0, maxx = -1;
        cin >> n;

        for(i=1; i<=n; i++){
            int a, b;
            cin >> a >> b;

            if(a <= 10){
                
                if(b > maxx){
                    maxx = b;
                    pos = i;
                }
            }
        }

        cout << pos << endl;
    }

    return 0;
}
