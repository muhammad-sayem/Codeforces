#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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
        int n, i, j, k, ans, XOR;
        cin >> n;
        int a[n+5];
        bool f = false;

        for(i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == 0) {
                f = true;
            }
        }

        if(f) cout << a[n-1] << endl;

        else{
            bool flag = false;

            for(i=0; i<=255; i++){
                vector<int> v;
                for(j=0; j<n; j++){
                    v.pb(a[j]^i);
                }

                XOR = 0;

                for(k=0; k<v.size(); k++){
                    XOR = XOR^v[k];
                }

                if(XOR == 0){
                    ans = i;
                    flag = true;
                    break;
                }
                v.clear();
            }

            // cout << XOR << endl;

            if(flag) cout << ans << endl;
            else cout << -1 << endl;
        }
    }

    return 0;
}