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
    fastIO;

    int n, t, i;
    cin >> n >> t;

    if(n == 1 && t == 10) cout << -1;

    else if(t<=9){
        for(i=0; i<n; i++){
            cout << t;
        }
    }

    else{
        for(i=0; i<n-1; i++){
            cout << 1;
        }
        cout << 0;
    }

    return 0;
}