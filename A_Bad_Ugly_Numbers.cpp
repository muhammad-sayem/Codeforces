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

        if(n==1) cout << -1 << endl;

        else if((n-1)%9 == 0){
            for(i=1; i<=n-2; i++){
                cout << 2; 
            }
            cout << 9 << 9 << endl;
        }

        else{
            for(i=1; i<=n-1; i++){
                cout << 2;
            }
            cout << 9 << endl;
        }
    }

    return 0;
}