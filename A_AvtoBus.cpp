#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);   
#define      sort(a)         sort(a, a+n);   
#define      Srev(s)         reverse(s.begin(), s.end());      
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             // code idea from hridhon vai's code and Polash vai's code //

    int test;
    cin >> test;

    while(test--){
        ll n, minn;
        cin >> n;

        if(n<4 || n%2 != 0) cout << -1 << endl;
        else{
            minn = n/6;
            if(n%6 != 0) minn++;
            cout << minn << " " << n/4 << endl;
        }
    }
    
    return 0;
}