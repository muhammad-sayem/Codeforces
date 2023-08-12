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
        ll n, i, pos;
        cin >> n;
        ll a[n+5];
        set<ll> s;

        for(i=1; i<=n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }

        if(s.size() == 1) cout << -1 << endl;

        else{
            sort(a+1, a+n+1);

            for(i=1; i<n; i++){
                if(a[i] != a[i+1]){
                    pos = i;
                }
            }

            cout << pos << " " << n-pos << endl;

            for(i=1; i<=pos; i++){
                cout << a[i] << " ";
            }
            cout << endl;

            for(i=pos+1; i<=n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    } 
    return 0;
}


