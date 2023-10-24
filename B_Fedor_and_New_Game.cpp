/*
    Approach: 

    m(last value) holo Fedor er. Oi last value er sathe array er prottek ta value
    XOR kore je value pawa jabe shetar set bit joto hobe (set bit joto hobe oto gula bit mile nai)
    sheta jodi (<=k) hoy tahole ans++ hobe nahole na 

    (Niche builtin function chara manually code ache)
*/

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

    int n, m, k, i;
    cin >> n >> m >> k;
    int a[m+5];
    
    for(i=0; i<m+1; i++){
        cin >> a[i];
    }

    int ans = 0;

    for(i=0; i<m; i++){
        if(__builtin_popcount(a[i] ^ a[m]) <= k){
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}

// ------------------------------------------------------------------ //

/*
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

int countSetBit(ll n){
    ll cnt = 0;

    while(n > 0){
        cnt += (n&1);
        n >>= 1;
    }

    return cnt;
}

int main()
{
    fastIO;

    int n, m, k, i;
    cin >> n >> m >> k;
    int a[m+5];
    
    for(i=0; i<m+1; i++){
        cin >> a[i];
    }

    int ans = 0;

    for(i=0; i<m; i++){
        if(countSetBit(a[i] ^ a[m]) <= k){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
*/