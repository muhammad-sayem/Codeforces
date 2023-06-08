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
    fastIO;             // code idea from Abid_Ul_Islam_Vai //

    int test;
    cin >> test;

    while(test--){
        int n, m;
        cin >> n >> m;

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int ans = 1e9;
        int moves = 0;

        if(x1+1 <= n) moves++;
        if(x1-1 >= 1) moves++;
        if(y1+1 <= m) moves++;
        if(y1-1 >= 1) moves++;

        ans = min(ans, moves);

        moves = 0;

        if(x2+1 <= n) moves++;
        if(x2-1 >= 1) moves++;
        if(y2+1 <= m) moves++;
        if(y2-1 >= 1) moves++;

        ans = min(ans, moves);

        cout << ans << endl;

    }


    return 0;
}