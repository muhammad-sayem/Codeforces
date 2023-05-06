#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;                 /// Explained by Abid vai ///

    int test;
    cin >> test;

    while(test--){
        int n, i, cnt = 0, ans = 0;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n; i++){
            if(a[i] == 0) cnt++;
            else{
                ans = max(ans, cnt);
                cnt = 0;
            }
        }

        ans = max(ans, cnt);
        cout << ans << endl;
    }

    return 0;
}


