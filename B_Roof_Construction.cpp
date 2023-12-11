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

ll binaryLength(ll n){
    ll cnt = 0;

    while(n!=0){
        cnt++;
        n /= 2;
    }

    return cnt;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, i;
        cin >> n;

        ll highestMSB = binaryLength(n-1);
        ll cnt = 0;
        i = n-2;

        // cout << highestMSB << nl;

        while(binaryLength(i) >= highestMSB){
            cnt++;
            i--;
        }
        // cout << cnt << nl;

        ll c = cnt;

        for(i=n-1; i>=1; i--){
            cout << i << " ";
            c--;
            if(c < 0) break;
        }

        for(i=0; i<n-1-cnt; i++){
            cout << i << " ";
        }
        cout << nl;
    }

    return 0;
}