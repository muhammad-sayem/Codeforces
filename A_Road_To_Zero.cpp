#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pll             pair<long long,long long>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             // code explainer (youtube channel) //

    int test;
    cin >> test;;
    while(test--){
        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;
        ll res = 0;

        if(x>y) swap(x,y);      // always x jate choto thake tai......karon x,y jayga poriborton korle answer e problem hoy na //

        res += a*(y-x);

        if(2*a < b) res += x*(2*a);
        else res += x*b;

        cout << res << endl;
    }

    return 0;
}