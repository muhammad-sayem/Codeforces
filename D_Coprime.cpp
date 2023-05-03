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

    int test;
    cin >> test;

    while(test--){
        int n, i, j, maxx, flag = 0;
        cin >> n;
        int a[n+5];

        for(i=1; i<=n; i++){
            cin >> a[i];
        }

        for(i=1; i<=n; i++){
            for(j=i; j<=n; j++){
                if( gcd(a[i], a[j]) == 1) {
                    maxx = i+j;
                    flag++;
                }
            }
        }
        if(flag == 0) cout << -1 << endl;
        else cout << maxx << endl;

    }


    return 0;
}