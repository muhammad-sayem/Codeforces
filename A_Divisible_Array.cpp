#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      sz(s)           s.size()
#define      pii             pair <int,int>
#define      pb              push_back
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

        for(i=1; i<=n; i++){
            cout << i*2 << " ";
        }
        cout << endl;

    }
                
    return 0;
}


