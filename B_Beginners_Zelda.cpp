#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
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
        int n, m, i;
        cin >> n;
        m = n-1;
        int fre[100005] = {0};

        while(m--){
            int u, v;
            cin >> u >> v;

            fre[u]++;
            fre[v]++;
        }

        int cnt = 0;

        for(i=1; i<=n; i++){
            if(fre[i] == 1){
                cnt++;
            }
        }

        // cout << (cnt+1)/2 << nl;

        if(cnt%2 == 0) cout << (cnt/2) << nl;
        else cout << (cnt/2)+1 << nl;
    }

    return 0;
}